// 解法 1：用 map 紀錄
class Solution {
    public:
        // 解法1：用map，key為元素、index為出現位置的索引
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            map<int, int>m;
            int n = nums.size();
            for(int i=0;i<n;i++){
                // 已經出現過一次
                if(m.count(nums[i]) && abs(i-m[nums[i]])<=k){
                    return true;
                }else{
                    m[nums[i]] = i;
                }
            }
            return false;
        }
    };

// 解法2：sliding window(滑動窗口)
class Solution {
    public:
        // 解法2：sliding window(滑動窗口)
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            set <int> s;
            int n = nums.size();
            for(int i=0;i<n;i++){
                // 檢查
                if(s.find(nums[i]) != s.end()) return true;
                // 把頭加進去
                s.insert(nums[i]);
                // 把頭踢掉
                if(s.size()>k) s.erase(nums[i-k]);
            }
            return false;
        }
    };