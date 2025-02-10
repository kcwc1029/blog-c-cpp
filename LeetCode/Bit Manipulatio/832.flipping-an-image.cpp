// 解法 1：就先按照題目要求
class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int m = image.size(); // row
            int n = image[0].size(); // col
    
            // 先左右翻轉
            for(int i=0;i<m;i++){
                // 左右翻轉
                for(int j=0;j<n/2;j++){
                    swap(image[i][j], image[i][n - j - 1]); // 交換每一行的對應位置
                }
            }
    
            // 10翻轉
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    image[i][j] = 1 - image[i][j]; // 將 0 變成 1，1 變成 0
                }
            }
            return image;
        }
    };
    
// 解法 2：優化至一個迴圈

class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int m = image.size(); // row
            int n = image[0].size(); // col
            for(int i=0;i<m;i++){
                // NOTE:
                // 解法1是j<(n/2) => 是不會遍歷到最中間的元素
                // 但因為要一次做完，所以要幫中間的元素做10反轉 => 變成+1再/2
                for(int j=0;j<(n+1)/2;j++){
                    // step1 左右反轉
                    swap(image[i][j], image[i][n - j - 1]);
                    // 左右交換
                    image[i][j] = 1 - image[i][j]; // 左邊10反轉
                    if(j!=(n - j - 1)){
                        image[i][n - j - 1] = 1 - image[i][n - j - 1]; // 右邊10反轉 => 先檢查有沒有到中間，沒有才做(預防中間做兩次)
                    }
                }
            }
            return image;
        }
    };