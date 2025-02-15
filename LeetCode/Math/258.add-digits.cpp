class Solution {
    public:
        int addDigits(int num) {
            while(num>9){ // 只接受一位數
                int temp = 0; // 紀錄每位相加的值
                while(num>0){
                    temp+=(num%10);
                    num/=10;
                }
                num = temp;
            }
            return num;
        }
    };