string toHex(int num) {
    if(num==0)return "0";
    string s = "0123456789abcdef";
    string ans = "";  // 存儲結果字串
    
    
    // 將 num 轉換為無符號數(處裡負數轉正數)
    unsigned int n = num;

    // 開始轉16進制
    while (n) {
        int digit = n % 16; 
        ans = s[digit] + ans;
        n/=16;
    }
    return ans;
}