class Solution {
public:
    // 先設定好規則
    // 0：海
    // 1：土地
    // 2：已拜訪過的土地

    // 做方向
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int DFS(vector<vector<int>>& grid, int i, int j, int m, int n){
        // 返回檢查
        if(i<0 || i>=m || j<0 || j>= n || grid[i][j]==0) return 1;
        // 訪問過
        if(grid[i][j]==2) return 0;
        // 記錄拜訪過
        grid[i][j]=2;
        // 由該點去DFS往外擴展
        int temp_ans = 0;
        for(int k=0;k<4;k++){
            temp_ans += DFS(grid, i+dx[k], j+dy[k], m, n);   
        }
        return temp_ans;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        // 先知道整體面積
        int m = grid.size(), n = grid[0].size();
        int ans = 0; // 周長
        // 先用for迴圈，去照到土地 => 開始DFS
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) ans += DFS(grid, i, j, m, n);
            }
        }
        return ans;
    }
};