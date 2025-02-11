class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            // 上下翻
            for(int i=0;i<n/2;i++){
                for(int j=0;j<n;j++){
                    swap(matrix[i][j], matrix[n-i-1][j]);
                }
            }
            // 右上左下翻
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
    };