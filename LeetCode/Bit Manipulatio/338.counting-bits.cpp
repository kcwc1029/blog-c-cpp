// 解法 1：就乖乖一個一個去數
class Solution {
    public:
        // 計算幾個1
        int getCnt(int u){
            int ans = 0;
            for (int i = 0; i < 32; i++){
                ans += (u & 1);
                u>>=1;
            }
            return ans;
        }
    
        vector<int> countBits(int n) {
            vector<int> ans(n + 1);
            for (int i = 0; i <= n; i++) {
                ans[i] = getCnt(i); // 計算每個數字的 1 的數量
            }
            return ans; // 返回結果向量
        }
    };
    // Your runtime beats 36.25 % of cpp submissions
    // Your memory usage beats 77.05 % of cpp submissions (9.3 MB)

// 解法 2：Brian Kernighan 演算法(針對解法 1 進行優化)
class Solution {
    public:
        // 計算幾個1
        int getCnt(int u){
            int count = 0;
            while(u>0){
                u = u&(u-1);
                count++;
            }
            return count;
        }
    
        vector<int> countBits(int n) {
            vector<int> ans(n + 1);
            for (int i = 0; i <= n; i++) {
                ans[i] = getCnt(i); // 計算每個數字的 1 的數量
            }
            return ans; // 返回結果向量
        }
    };
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 90.46 % of cpp submissions (9.2 MB)


// 解法 3：DP
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1);
        int highBit = 0;
        for (int i = 1; i <= n; i++) {
            if ((i & (i - 1)) == 0) {
                highBit = i;
            }
            bits[i] = bits[i - highBit] + 1;
        }
        return bits;
    }
};