class Solution {
    public:
        int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}}; // 方向順序: 右->下->左->上
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int idx = 0; 
            vector<int> ans;
            int m = matrix.size(), n = matrix[0].size(); // 矩陣長寬
            int x = 0, y = 0; // 當前位置
            int dir_idx = 0; // 方向索引
            while(idx < m * n) {
                ans.push_back(matrix[x][y]); 
                matrix[x][y] = -101; // 標記走過 (元素值是 -100~100，所以用 -101 表示已訪問)
                
                // 預計下一步的位置
                int temp_x = x + dir[dir_idx][0];
                int temp_y = y + dir[dir_idx][1];
    
                // 判斷是否需要轉向
                if(temp_x < 0 || temp_x >= m || temp_y < 0 || temp_y >= n || matrix[temp_x][temp_y] == -101) {
                    dir_idx = (dir_idx + 1) % 4; // 順時針轉向
                    temp_x = x + dir[dir_idx][0];
                    temp_y = y + dir[dir_idx][1];
                }
                x = temp_x;
                y = temp_y;
                idx++; 
            }
            return ans;
        }
    };