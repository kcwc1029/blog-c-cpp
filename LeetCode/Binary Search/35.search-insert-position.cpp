// 解法1：由頭往後
class Solution {
    public:
        // 解法1：由頭往後
        int searchInsert(vector<int>& nums, int target) {
            int n = nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]>= target){
                    return i;
                }
            }
            return n; // 最後面(最大)
        }
    };

// 解法2：二分搜尋
class Solution {
    public:
        // 解法2：二分搜尋
        int searchInsert(vector<int>& nums, int target) {
            int left = 0, right = nums.size() - 1;
            while(left<=right){
                int mid = left + (right - left) / 2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) right = mid-1;
                else left = mid + 1;
            }
            return left; // 最後會重疊，那我取left
        }
    };