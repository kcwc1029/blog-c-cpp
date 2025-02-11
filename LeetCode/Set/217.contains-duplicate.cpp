// 解法1：用排序
class Solution {
    public:
        // 解法1：用排序
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    return true;
                }
            }
            return false;
        }
    };

// 解法2：用set
class Solution {
    public:
        // 解法2：用set
        bool containsDuplicate(vector<int>& nums) {
            set<int> s;
            for(int i:nums){
                // 查詢是否存在
                if (s.find(i) != s.end()) return true;
                else s.insert(i);
            }
            return false;
        }
    };