class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            // 記錄矩陣的第一行和第一列是否需要設置為 0
            bool row_flag = false, col_flag = false;
    
            // TODO: 檢查第一row col是否需要設置為 0
            for (int i = 0; i < m; i++){
                if (matrix[i][0] == 0){
                    col_flag = true;
                    break;
                }
            }
            for (int i = 0; i < n; i++){
                if (matrix[0][i] == 0){
                    row_flag = true;
                    break;
                }
            }
    
            // TODO: 往裡面找，如果有0，在他的第一row、col設定為0
            for (int i = 1; i < m; ++i) {
                for (int j = 1; j < n; ++j) {
                    if (matrix[i][j] == 0) {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
    
            // 第二次處理
            // TODO: 根據標記設置對應的行和列為 0
            for (int i = 1; i < m; ++i){
                if (matrix[i][0] == 0){
                    for (int j = 1; j < n; ++j){
                        matrix[i][j] = 0;
                    }
                }
            }
            for (int j = 1; j < n; ++j){
                if (matrix[0][j] == 0){
                    for (int i = 1; i < m; ++i){
                        matrix[i][j] = 0;
                    }
                }
            }
    
            // TODO: 在回來處理處理第一行和第一列
            if (row_flag){
                for (int j = 0; j < n; ++j){
                    matrix[0][j] = 0;
                }
            }
    
            if(col_flag){
                for (int i = 0; i < m; ++i){
                    matrix[i][0] = 0;
                }
            }
        }
    };