/*
Solution 2nd
- TC : O(N) SC: O(1)
- Difficulty : Easy - Medium , depends if you know the concept
- I used swap sort with marked index
- Floyd Cycle detection can also be used here -> fast and slow pointer 
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

    int x,dup=0;
    for(int i=0;i<nums.size();i++){   // mark element as negative when we 
                                      // find its occurance mark it negative
        x = abs(nums[i])-1;           // if we find an element already -ve that our answer

        if(nums[x]>0){
            nums[x] =  nums[x] * -1;
        }
        else{
            dup = abs(nums[i]);
            break;
        }
    }
    
    for(int i=0;i<nums.size();i++){     // this loop is for restoring array to 
        if(nums[i]<0){                  // its original form
            nums[i] = nums[i]*-1;
        }
    }
    
    return dup;   
    }
};

-------------------------------------------------------------------------------------------------------------------------------
// Solution - 1     
// TC : O(nlogn) as we use inbuilt sort function here
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int i;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return nums[i-1];
        
    }
};
