class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    	int i, j, k, size;
    	int closest, sum;
    	size = nums.size();
        sort(nums.begin(), nums.end());
    	closest = nums[0] + nums[1] + nums[2];
    	for(i = 0; i < size - 2; i++) {
    		for(j= i + 1, k = size - 1; j < k; ) {
    			sum = nums[i] + nums[j] + nums[k];
	   			if(sum == target)
    				return sum;
    			if(abs(target - sum) < abs(target - closest))
    				closest = sum;
    			if(sum > target)
	   				k--;
    			else
    				j++;
    		}
	   	}
    	return closest;
    }
};
