class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int head = 0, tail = 0;
        while(tail < nums.size()) {
            if(nums[tail] != 0)
                nums[head++] = nums[tail];
            tail++;
        }
        while(head < nums.size())
            nums[head++] = 0;
    }
};
