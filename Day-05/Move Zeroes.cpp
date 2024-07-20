class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int f=0,s=0;

        while(s<nums.size()-1){

            if(nums[f]==0){
                s++;
                if(nums[s]!=0){
                    swap(nums[f],nums[s]);
                    f++;
                }
            }
            else{
                f++;
                s=f;
            }            
        }
    }
};
