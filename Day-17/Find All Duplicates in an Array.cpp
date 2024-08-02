/*
 - TC : O(N),  SC : O(1) 
 - Difficulty : Easy-Medium, easy if you know marked swap sort
 - Its same as Find the Duplicate Number 
 - Leetcode : https://leetcode.com/problems/find-all-duplicates-in-an-array/
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> v;
        int x;

        for(int i=0;i<nums.size();i++){

            x = abs(nums[i])-1;
            if(nums[x]>0){
                nums[x] = nums[x] * -1;
            }
            else{
                v.push_back(x+1);
            }
        }

        return v; 
    }
};
