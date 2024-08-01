/*
difficulty : Easy-Hard ,depending upon if you recognize its using NSR and NSL concept 
Leetcode : https://leetcode.com/problems/largest-rectangle-in-histogram/

*/

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        int n = h.size();
        stack<pair<int,int>> ls;
        stack<pair<int,int>> rs;
        
        vector<int> left(n);
        vector<int>right(n);
        vector<int>result(n);

        int min = INT_MIN;

        for(int i=0;i<h.size();i++){

            while(!ls.empty() and h[i]<=ls.top().first){
                ls.pop();
            }
            if(ls.empty()){
                left[i] = i+1;
            }
            else{
                left[i] = i-ls.top().second;
            }
            ls.push({h[i],i});
        }

        for(int i=n-1;i>=0;i--){

            while(!rs.empty() and h[i]<=rs.top().first){
                rs.pop();
            }
            if(rs.empty()){
                right[i] = n-i;
            }
            else{
                right[i] = rs.top().second - i;
            }
            rs.push({h[i],i});
        }
        for(int i=0;i<n;i++){
            result[i] = (left[i]+right[i]-1) * h[i];
            if(result[i]>min){
                min = result[i];
            }
        }
        return min;
    }
};
