class Solution {
    public:
        string addBinary(string a, string b) {
            string ans = "";
            // 反轉
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            // 找最大數->知道要加幾次
            int n = max(a.size(), b.size());
            int carry = 0; // 進位
            for(int i=0;i<n;i++){
                // 處理a的位元
                if(i<a.size() && a[i]=='1') carry+=1;
                // 處理b的位元
                if(i<b.size() && b[i]=='1') carry+=1;
    
                // ans處理結果
                if(carry%2==1) ans += '1';
                else ans += '0';
    
                carry/=2;
            }
    
            // 處理carry最後
            if(carry) ans += '1';
            reverse(ans.begin(), ans.end());
            return ans; // 返回最終結果
    
        }
    };