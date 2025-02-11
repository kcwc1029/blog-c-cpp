class Solution {
    public:
        int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}}; // 方向順序: 右->下->左->上 
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> ans(n, vector<int>(n, 0)); // 初始化 n x n 的矩陣
            int num = 1; // 要填入的數字
            int x = 0, y = 0; // 當前位置
            int dir_idx = 0; // 當前方向索引
            while(num<=n*n){
                ans[x][y] = num;
                num++;
    
                // 預計下一步的位置
                int temp_x = x + dir[dir_idx][0];
                int temp_y = y + dir[dir_idx][1];
    
                // 判斷是否需要轉向 (超出邊界或遇到已填充的格子)
                if(temp_x < 0 || temp_x >= n || temp_y < 0 || temp_y >= n || ans[temp_x][temp_y] != 0) {
                    dir_idx = (dir_idx + 1) % 4; // 順時針轉向
                    temp_x = x + dir[dir_idx][0];
                    temp_y = y + dir[dir_idx][1];
                }
    
                x = temp_x;
                y = temp_y;
            }
            return ans;
        }
    };