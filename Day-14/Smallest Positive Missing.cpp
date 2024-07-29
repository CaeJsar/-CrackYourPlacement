/*
- Difficulty : easy - medium
- TC O(n) SC O(n)
- try doing it in O(1) SC ...
- GFG: https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
*/
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        long int small = INT_MAX;
        long int big = INT_MIN;
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                m[arr[i]]++;
                if(arr[i]<small){
                    small = arr[i];
                }
                if(arr[i] > big){
                    
                    big = arr[i];
                }
            }
        }
        //cout<<small<<" "<<big<<endl;
        if(small!=1)return 1;
        
        for(int i=small+1;i<big;i++){
            if(m.find(i)==m.end()){
                return i;
            }
        }
        
        return big+1;
    } 
};
