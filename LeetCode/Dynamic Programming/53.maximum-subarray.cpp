// 解法 1：前缀和
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int ans = INT_MIN;
            int min_pre_sum = 0;
            int pre_sum = 0;
    
            for(int i=0;i<nums.size();i++){
                pre_sum+=nums[i];
                ans = max(ans, pre_sum-min_pre_sum);
                min_pre_sum = min(min_pre_sum, pre_sum);
            }
            return ans;
        }
    };

// 解法2：DP
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            vector<int> dp(nums.size());
            dp[0] = nums[0];
            for(int i=1;i<nums.size();i++){
                dp[i] = max(dp[i-1], 0) + nums[i];
            }
            return *max_element(dp.begin(), dp.end()); // 從陣列中找到最大值
        }
    };