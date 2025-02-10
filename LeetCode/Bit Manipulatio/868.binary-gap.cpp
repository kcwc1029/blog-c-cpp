class Solution {
    public:
        int binaryGap(int n) {
            int j=-1;// 紀錄上一次的位置
            int ans=0; // 紀錄距離
            for (int i = 0; i < 32; i++) {
                if (n & 1) { // 當前位是 1
                    if (j != -1) { // 檢查是否已有上一個 1
                        ans = max(ans, i - j); // 計算距離並更新最大值
                    }
                    j = i; // 更新上一個 1 的位置
                }
                n >>= 1; // 右移 1 位
            }
            return ans;
        }
    };