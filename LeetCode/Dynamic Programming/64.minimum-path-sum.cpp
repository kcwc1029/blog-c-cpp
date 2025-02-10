// 解法：dp
class Solution {
    public:
        int minPathSum(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();
    
            vector<vector<int>> dp(m, vector<int>(n, 0));
            dp[0][0] = grid[0][0];
            
            // NOTE: 處裡左邊第一col
            for(int i=1;i<m;i++){
                dp[i][0] = grid[i][0] + dp[i-1][0];
            }
            // NOTE: 處裡第一row
            for(int i=1;i<n;i++){
                dp[0][i] = grid[0][i] + dp[0][i-1];
            }
            // 其他部分，就一直dp下去
            // 上格根左格看哪一個步數比較少，當前格去加比較少格的
            for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    int temp = min(dp[i-1][j], dp[i][j-1]);
                    dp[i][j] = grid[i][j] + temp;
                }
            }
            return dp[m-1][n-1];
        }
    };