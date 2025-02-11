// 解法1：
class Solution {
    public:
        // 解法1
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int left=0; // 左指針
            for(int right=0;right<n;right++){ // 右指針
                if(nums[right]!=nums[left]){
                    left++; // 這邊要先往下，移到未處裡的位子，在把右指針的值給左指針
                    nums[left] = nums[right];
    
                }
            }
            // 最後要返回的是結果長度
            return left+1;
        }
    };

// 解法2：延伸 26
class Solution {
    public:
        // 解法2
        int removeDuplicates(vector<int>& nums) {
           return process(nums, 1); // 保留1位
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