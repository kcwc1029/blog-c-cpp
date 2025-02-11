class Solution {
    public:
        // 解法：利用26題的解法2
        int removeDuplicates(vector<int>& nums) {
            return process(nums, 2); // 保留1位
        }
    
        int process(vector<int>& nums, int k){
            int n = nums.size();
            int left = 0;
            for(int right=0;right<n;right++){
                if(left<k || nums[left-k]!=nums[right]){
                    nums[left]=nums[right];
                    left++;
                }
            }
            return left;
        }
    };