class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int twoSum_size = (sizeof(nums) / sizeof(nums[0]));
        int twoSum_size = nums.size();
        for(int i = 0; i< twoSum_size; i++){
            for(int j = i+1; j< twoSum_size; j++){
                if(target == nums[i] + nums[j]){
                    return {i,j};
                }
            }    
        }
        return {}; 
    }
};