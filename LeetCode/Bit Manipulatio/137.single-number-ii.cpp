// 解法 1：用 map 紀錄次數。
class Solution {
    public:
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
    // - Your runtime beats 37.05 % of cpp submissions
    // - Your memory usage beats 24.74 % of cpp submissions (13.4 MB)

// 解法 2：用陣列紀錄：因為她有說數值範圍到 2^32，
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            // 建立一個長度為 32 且所有元素為 0 的 vector，
            vector<int> v(32, 0);
    
            // 累加所有數字在每個位元上的 1 的數量
            for (int num : nums) {
                for (int i = 0; i < 32; ++i) {
                    v[i] += ((num >> i) & 1); // 計算第 i 位是否為 1，並累加到 v[i]
                }
            }
    
            // 計算只出現一次的數字
            int ans = 0;
            for (int i = 0; i < 32; ++i) {
                if (v[i] % 3 != 0) {
                    ans |= (1 << i); // 將該位設為 1
                }
            }
            return ans;
        }
    };