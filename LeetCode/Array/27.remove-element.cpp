class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = nums.size();
            int left = 0;
            for(int right=0;right<n;right++){
                if(nums[right]!=val){
                    // 先處理好，再往下走
                    nums[left]=nums[right];
                    left++;
                }
            }
            return left;
        }
    };