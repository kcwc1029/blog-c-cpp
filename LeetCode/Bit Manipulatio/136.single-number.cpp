// 解法 1：排序
class Solution {
    public:
        // 用map
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(), nums.end()); // i需要+2，去錯開檢查過的值
            for(int i=0;i<n-1;i+=2){
                if(nums[i]!=nums[i+1]){
                    return nums[i];
                }
            }
            return nums[n-1];
        }
    };

// 解法2：map
class Solution {
    public:
        // 用map
        int singleNumber(vector<int>& nums) {
            map<int, int>m;
            for(int i:nums) m[i]++;
            for (auto i : m) {
                if (i.second == 1) {
                    return i.first;
                }
            }
            return -1;
    
        }
    };

// 解法 3：XOR
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans = nums[0];
            int n = nums.size();
            for(int i=1;i<n;i++){
                ans ^= nums[i];
            }
            return ans;
        }
    };