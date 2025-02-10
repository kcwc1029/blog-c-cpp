// 解法 1：紀錄(看你要用 vector 或 map 都可以)
class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int duplicate = 0;
            int missing = 0;
            int n = nums.size();
            map<int, int> m;
            for(int i=0;i<n;i++){
                m[nums[i]]++;
            }
            for(int i=1;i<n+1;i++){
                if(m[i]==2) duplicate = i;
                if(m[i]==0) missing = i;
            }
            return {duplicate, missing};
        }
    };



// 解法 2：排序
// 重複的數字：若 curr == prev，表示當前數字重複
// 丟失的數字：若 curr - prev > 1，表示中間缺少一個數字，應記錄為丟失數字 prev + 1。
class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int duplicate = 0, missing = 0;
            int n = nums.size();
            int prev = 0;
            sort(nums.begin(), nums.end());
            for(int i=0;i<n;i++){
                if(nums[i] == prev) duplicate = nums[i];
                if(nums[i] - prev>1) missing = prev +1;
                prev = nums[i]; // 更新 prev
            }
    
            // NOTE: [1,1]時要額外處裡
            if (nums[n - 1] != n) missing = n;
            return {duplicate, missing};
        }
    };