// 解法1：(42 ms)
class Solution {
    public:
        // 因為她就是要回傳兩個嘛，所以可以先用for迴圈去定第一個，然後再用另一個for迴圈去找第二個
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    // nums[i], nums[j]
                    // nums[i]+nums[j]==target???
                    if(nums[i]+nums[j]==target){
                        return {i, j};
                    }
                }
            }
            return {};
        }
    };


// 解法2：處理時間複雜度的問題 -> 利用map (2 ms)
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int n = nums.size();
            map<int, int> m;
            for(int i=0;i<n;i++){
                // 查找元素
                auto it = m.find(target - nums[i]);
                if(it!=m.end()){
                    return {it->second, i};
                }else{
                    m[nums[i]] = i;
                }
            }
            return {};
        }
    };