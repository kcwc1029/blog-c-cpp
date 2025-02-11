class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<vector<int>> ans(rowIndex+1); // 宣告二維陣列
            for (int i = 0; i < rowIndex+1; i++){
                ans[i].resize(i + 1);
                ans[i][0]=1;
                ans[i][i]=1;
                for(int j=1;j<i;j++){
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }
            return ans[rowIndex];
        }
    };