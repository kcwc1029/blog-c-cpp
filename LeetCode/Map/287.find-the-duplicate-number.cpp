// 解法 1：用 map
class Solution {
    public:
        // 解法1：用map紀錄
        int findDuplicate(vector<int>& nums) {
            map<int, int> m;
            for(auto i:nums){
                if(m[i]>0){
                    return i;
                }else{
                    m[i]++;
                }
            }
            return -1;
        }
    };
    // - Your runtime beats 5.25 % of cpp submissions
    // - Your memory usage beats 10.3 % of cpp submissions (89.5 MB)

// 解法 2 是用 linked 的方式
class Solution {
    public:
        // 解法2：linked
        int findDuplicate(vector<int>& nums) {
            int fast=0, slow=0; // 快慢指針
            while(true){
                fast = nums[fast];
                fast = nums[fast];
                slow = nums[slow];
                if(slow==fast)break;
            }
            // 形成循環後，最後的終點就是重複點
            int ptr = 0;
            while(ptr!=slow){
                ptr = nums[ptr];
                slow = nums[slow];
            }
            return ptr;
        }
    };
    // - Your runtime beats 52.42 % of cpp submissions
    // - Your memory usage beats 98.91 % of cpp submissions (63.7 MB)

// 解法 3：二分+抽屜原理
class Solution {
    public:
        // 解法3：二分+抽屜原理
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
            // NOTE:設定一開始的範圍： 1到n的範圍
            int left = 1, right=n-1;
            int ans=-1;
            while(left<=right){
                // NOTE: 抽屜原理
                int mid = left + (right - left) / 2;
                int count = 0;
                for(int i=0;i<n;i++){
                    if(nums[i]<=mid) count ++;
                }
                if(count<=mid) left = mid +1;
                else{
                    right = mid - 1;
                    ans = mid; // 每次去更新最後答案
                }
            }
            return ans;
        }
    };
    // - Your runtime beats 42.99 % of cpp submissions
    // - Your memory usage beats 52.83 % of cpp submissions (63.9 MB)