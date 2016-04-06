class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro, minpro, index;
        int result;
        if(nums.size() == 0)    return 0;
        if(nums.size() == 1)    return nums[0];
        maxpro = max(nums[0], 0);
        minpro = min(nums[0], 0);
        result = maxpro;
        for(index = 1; index < nums.size(); index++) {
            if(nums[index] == 0) {
                maxpro = 0; minpro = 0;
            }
            else if(nums[index] > 0) {
                maxpro = max(nums[index], nums[index]*maxpro);
                minpro = min(0, nums[index]*minpro);
            }
            else {
                int tmp = maxpro;
                maxpro = max(0, nums[index]*minpro);
                minpro = min(nums[index], nums[index]*tmp);
            }
            
            result = max(maxpro, result);
        }
        return result;
    }
};