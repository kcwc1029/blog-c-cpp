// 解法 1：用 map 紀錄次數，返回最多的那個
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            map<int, int> m;
            int n = nums.size();
            for(int i:nums){
                m[i]++;
            }
            // 遍厲map ->  key-value 配對
            for(auto& p : m) {
                if(p.second > n / 2) {   // 如果該元素出現次數超過 n/2
                    return p.first;      // 返回該元素 (majority element)
                }
            }
            return 0;
        }
    };

// 解法 2：針對 map 進一步優化，在記錄 map 的時後，一併紀錄最多的次數
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            map<int, int> m;
            int n = nums.size();
            int mostCount=0, mostNum=0;
            for(int i:nums){
                m[i]++;
                // 更新紀錄
                if(m[i]>mostCount){
                    mostCount = m[i];
                    mostNum = i;
                }
            }
            return mostNum;
        }
    };

// 解法 3：題目描述  【more than `⌊n / 2⌋` times】，那我只要先做排序，然後找那個在最中間的數值。
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
           sort(nums.begin(), nums.end());
           return nums[nums.size() / 2];
        }
    };



