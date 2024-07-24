class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> v(3);
        int k=0;

        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }

        for(int i=0;i<3;i++){

            while(v[i]>0){
                nums[k] = i;
                v[i]--;
                k++;
            }
        }
        
    }
};
