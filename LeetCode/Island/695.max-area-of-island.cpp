class Solution {
public:
    // 先設定好規則
    // 0：海
    // 1：土地
    // 2：已拜訪過的土地

    // 做方向
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    void DFS(vector<vector<int>>& grid, int i, int j, int m, int n, int &area){
        // 返回檢查
        if(i<0 || i>=m || j<0 || j>= n || grid[i][j]==0 || grid[i][j]==2) return;

        area++;
        grid[i][j]=2;
        for(int k=0;k<4;k++){
            DFS(grid, i+dx[k], j+dy[k], m, n, area);   
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0; // 最大長度
        // 先用for迴圈，去照到土地 => 開始DFS
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int area = 0;
                    DFS(grid, i, j, m, n, area);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};