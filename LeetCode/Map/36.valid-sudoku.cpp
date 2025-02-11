class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            // 用三個哈希表來記錄每行、每列和每個box中是否出現過某個數字
            int row[9][10] = {0}; // 每一行的哈希表，紀錄數字是否出現過（10 是因為數字 1~9）
            int col[9][10] = {0}; // 每一列的哈希表
            int box[9][10] = {0}; // 每個 box 的哈希表
            for(int i=0; i<9; i++){
                for (int j=0; j<9; j++){
                    // 跳過空格（用 '.' 表示）
                    if(board[i][j] == '.') continue;
                    // 取出該值
                    int curNumber = board[i][j]-'0';
                    if(row[i][curNumber]) return false; 
                    if(col[j][curNumber]) return false;
                    if(box[j/3 + (i/3)*3][curNumber]) return false; // NOTE: 如何映射到box
                    // 紀錄
                    row[i][curNumber] = 1;
                    col[j][curNumber] = 1;
                    box[j/3 + (i/3)*3][curNumber]=1;
                }
            }
            return true;
        }
    };