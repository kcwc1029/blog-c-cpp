class Solution {
    public:
        int findComplement(int num) {
            int mask = 0;
            int temp = num;
    
            // 創建一個全是 1 的遮罩，遮罩的長度等於 num 的二進位長度
            while (temp > 0) {
                mask = (mask << 1) | 1;
                temp >>= 1;
            }
    
            // 使用遮罩反轉 num 的位元
            return (~num) & mask;
        }
    };