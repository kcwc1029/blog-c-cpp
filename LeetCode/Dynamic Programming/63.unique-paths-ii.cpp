class Solution {
    public:
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int m=obstacleGrid.size();
            int n=obstacleGrid[0].size();
            vector<vector<int>> dp(m, vector<int>(n, 0)); // 要先全部塞0
            for(int i=0;i<m;i++){
                if(obstacleGrid[i][0]==1) break;
                dp[i][0]=1;
            }
            for(int i=0;i<n;i++){
                if(obstacleGrid[0][i]==1) break;
                dp[0][i]=1;
            }
            for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    if(obstacleGrid[i][j]==1)continue;
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
            return dp[m-1][n-1];
        }
    };

// 針對解法1：二維DP壓縮成一為DP
class Solution {
    public:
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int m=obstacleGrid.size();
            int n=obstacleGrid[0].size();
            vector<int> dp(n, 0); // 初始化一維DP陣列
            dp[0]=1; // 預設在第一行的第一步有走出去
    
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if (obstacleGrid[i][j] == 1) {
                        dp[j] = 0; // 如果遇到障礙物，設為0
                    } else if (j > 0) {
                        dp[j] = dp[j] + dp[j - 1]; // 計算當前格子的路徑數
                    }
                }
            }
            return dp[n-1];
        }
    };