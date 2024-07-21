class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        vector<int> v(2);

        for(int i=0;i<nums.size();i++){
            
            if(m.find( target - nums[i])!=m.end()){

                v[0] = m[target - nums[i]];
                v[1] = i;
            }
            else m.insert({nums[i],i});
        }

        return v;

    }
};
