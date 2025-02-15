class Solution {
    public:
        int maximumProduct(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            // NOTE: 三個數相乘要找最大數的話，會有兩種可能：
            // 全部都是正數：就nums[n - 3] * nums[n - 2] * nums[n - 1]
            // 有正有負：nums[0] * nums[1] * nums[n - 1]
            return max(nums[0] * nums[1] * nums[n - 1], nums[n - 3] * nums[n - 2] * nums[n - 1]);
        }
    };