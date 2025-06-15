// 解法01：DFS
class Solution {
public:
    // 做方向
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    void DFS(vector<vector<char>>& grid, int i, int j, int m, int n){
        // 返回檢查
        if(i<0 || i>=m || j<0 || j>= n || grid[i][j]=='0' || grid[i][j]=='2') return;
        // 記錄拜訪過
        grid[i][j]='2';
        // 由該點去DFS往外擴展
        for(int k=0;k<4;k++){
            DFS(grid, i+dx[k], j+dy[k], m, n);   
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        // 先知道整體面積
        int m = grid.size(), n = grid[0].size();
        int ans = 0; // 數量
        // 先用for迴圈，去照到土地 => 開始DFS
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    DFS(grid, i, j, m, n);
                } 
            }
        }
        return ans;
    }
};

// 解法02：用BFS解也可以
class Solution {
public:
    // 做方向
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    void BFS(vector<vector<char>>& grid, int i, int j, int m, int n){
        queue<pair<int , int>> q;
        q.push({i, j});
        while(!q.empty()){
            int temp_i = q.front().first;
            int temp_j = q.front().second;
            q.pop();
            if(temp_i<0 || temp_i>=m || temp_j<0 || temp_j>=n || grid[temp_i][temp_j]=='0' || grid[temp_i][temp_j]=='2') return;
            grid[temp_i][temp_j]='2';
            for(int k=0;k<4;k++) BFS(grid, i+dx[k], j+dy[k], m, n);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        // 先知道整體面積
        int m = grid.size(), n = grid[0].size();
        int ans = 0; // 數量
        // 先用for迴圈，去照到土地 => 開始DFS
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    BFS(grid, i, j, m, n);
                } 
            }
        }
        return ans;
    }
};