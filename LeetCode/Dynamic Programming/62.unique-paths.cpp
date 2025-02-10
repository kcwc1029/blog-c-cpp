// 法1：排列組合數學計算
class Solution {
    public:
        // 使用迴圈實現階層
        long long factorial(int n) {
            long long result = 1;
            for (int i = 2; i <= n; ++i) {
                result *= i;
            }
            return result;
        }
        int uniquePaths(int m, int n) {
            return factorial(m+n-2) / (factorial(m-1) * factorial(n-1));
        }
    };


// 但上述的解法會抱錯，在於factorial(m+n-2)太大了，因此要優化
// 進一步優化
class Solution {
    public:
        int uniquePaths(int m, int n) {
            long long result = 1;
            // 選擇較小的 b，計算 C(m+n-2, b)
            int b = min(m - 1, n - 1);
            for (int i = 1; i <= b; ++i) {
                result = result * (m + n - 1 - i) / i; 
            }
            return result;
        }
    };

// 解法2：DP
class Solution {
    public:
        int uniquePaths(int m, int n) {
            vector<vector<int>> v(m, vector<int>(n));
            for (int i = 0; i < m; ++i) {
                v[i][0] = 1;
            }
            for (int j = 0; j < n; ++j) {
                v[0][j] = 1;
            }
            for (int i = 1; i < m; ++i) {
                for (int j = 1; j < n; ++j) {
                    v[i][j] = v[i - 1][j] + v[i][j - 1]; // 當前 = 上面+左邊
                }
            }
            return v[m - 1][n - 1];
        }
    };

// 針對解法 2：二維 DP 壓縮成一為 DP
class Solution {
    public:
        int uniquePaths(int m, int n) {
            vector<int> dp(n,1); // 設為1表示第一行(全部像右)
            for (int i = 1; i < m; ++i) {
                for (int j = 1; j < n; ++j) {
                    dp[j] = dp[j] + dp[j - 1];
                }
            }
            return dp[n - 1];
        }
    };