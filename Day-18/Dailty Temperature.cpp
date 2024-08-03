/*
 - Difficulty : Easy - Medium, easy if you know NSR,NLR concept using stack
 - Leetcode : https://leetcode.com/problems/daily-temperatures/ 
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

     stack<pair<int,int>> s;
     vector<int> v(temp.size(),-1);

     for(int i=temp.size()-1;i>=0;i--){

        while(!s.empty() and temp[i]>=s.top().first){
            
            s.pop();
        }
        if(s.empty()){
            v[i]=0;
        }
        else{
            v[i] = s.top().second - i;
        }
        s.push({temp[i],i});
     }
     return v;

    }
};
