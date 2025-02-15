class Solution {
    public:
        string convertToBase7(int num) {
            if(num==0) return "0";
            string s = "";
            bool flag = num<0; // 紀錄原本的值正副(true負false正)
            if(flag==true)num = -num; // 近制處裡
            while(num){
                s+=to_string(num%7);
                num/=7;
            }
            reverse(s.begin(), s.end());
            if(flag==true) return "-"+s;
            else return s;
        }
    };