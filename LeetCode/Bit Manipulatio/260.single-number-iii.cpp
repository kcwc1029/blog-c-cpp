class Solution {
    public:
        vector<int> singleNumber(vector<int>& nums) {
            int xorsum = 0;
            for (int num: nums) {
                xorsum ^= num;
            }
            // 使用無符號整數來計算 lsb，防止溢位(我也看不懂)
            int lsb = (xorsum == INT_MIN ? xorsum : xorsum & (-xorsum));
    
            int type1 = 0, type2 = 0;
            for (int num: nums) {
                if (num & lsb) {
                    type1 ^= num;
                } else {
                    type2 ^= num;
                }
            }
            return {type1, type2};
        }
    };