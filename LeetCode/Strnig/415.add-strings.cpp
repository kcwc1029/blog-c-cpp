class Solution {
    public:
        string addStrings(string num1, string num2) {
            string ans = "";
            int n = num1.size(), m = num2.size();
            int i = n-1, j = m-1;
            int carry = 0; // 近位
            while(i>-1 || j>-1 || carry>0){
                int n1, n2;
                if(i>=0) n1 = num1[i]-'0';
                else n1 = 0;
    
                if(j>=0) n2 = num2[j]-'0';
                else n2 = 0;
    
                int result = n1 + n2 + carry;
                ans += (result%10)+'0';
                carry = result/10;
                i--, j--;
            }
            reverse(ans.begin(), ans.end());
            return  ans;
        }
    };