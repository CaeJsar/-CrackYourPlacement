//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
      
    int i=0,j=m-1;
    long long int diff = INT_MAX;
    
    while(j<n){
        
        if(a[j]-a[i]<diff){
            diff = a[j]-a[i];
        }
        i++;
        j++;
    }
    return diff;
    }   
};
