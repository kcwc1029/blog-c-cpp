class Solution {
    public:
        int divide(int dividend, int divisor) {
            // 如果除數是 1，結果直接是被除數
            if (divisor == 1) return dividend;
            // 溢出情況：如果被除數是 INT_MIN 且除數是 -1 或 0，返回 INT_MAX（避免溢出）
            if ((dividend == INT_MIN && divisor == -1) || divisor == 0) return INT_MAX;
            int ans = 0;
            bool flag = true; // 紀錄正負號(正為true負為false)
            if(dividend<0 && divisor>0)flag = false;
            if(dividend>0 && divisor<0)flag = false;
    
            // 將被除數和除數轉為正數（使用 long 以避免溢出）
            long dvd = abs((long)dividend);
            long dvs = abs((long)divisor);
            // 被除數大於等於除數
            while (dvd >= dvs){
                long temp = dvs; //當前除數
                int q = 1;
                while(dvd>=(temp<<1)){
                    temp<<=1;
                    q<<=1;
                }
                dvd-=temp;
                ans+=q;
            }
            if(flag==true)return ans;
            else return -ans;
        }
    };