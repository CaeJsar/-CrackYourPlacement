class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int traverse=1;
        int set=0;

        while( traverse<nums.size() ){
            if(nums[set]!=nums[traverse]){
                set++;
                nums[set] = nums[traverse];

            }
            traverse++;
        }
        return set+1;
    }
};
