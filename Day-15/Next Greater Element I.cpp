/*
difficulty : easy for TC O(n^2) - medium for TC O(n+m)
its kind of easy if it hits you that we can use stack for finding next greater element.
Leetcode: https://leetcode.com/problems/next-greater-element-i/
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        int i=nums2.size()-2;
        s.push(nums2[i+1]);

        unordered_map<int,int>m;
        m.insert({nums2[i+1],-1});

        for(i;i>=0;i--){
            if(nums2[i]<s.top()){
                m.insert({nums2[i],s.top()});
                s.push(nums2[i]);
            }
            else{
                while(!s.empty() and nums2[i]>s.top()){
                    s.pop();
                }
                if(s.empty()){
                    m.insert({nums2[i],-1});  
                }
                else{
                    m.insert({nums2[i],s.top()});                    
                }
                s.push(nums2[i]);
            }
            
        }

        for(int j=0;j<nums1.size();j++){
            auto it = m.find(nums1[j]);
            nums1[j] = it->second;
        }

        return nums1;
    }
};
