// 解法01
string addBinary(string a, string b) {
    int aSize = a.size(), bSize = b.size();
    int i = aSize - 1, j = bSize - 1; // 最右邊(個位) 
    int carry = 0;
    string ans;
    while (i >= 0 || j >= 0 || carry){
        int sum = 0; // 每一位一位的加總
        // 加總計算
        if (i >= 0){
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0){
            sum += b[j] - '0';
            j--;
        }
        sum += carry;

        // 處理加總後的結果
        ans += (sum % 2) + '0';
        carry = sum/2;
    }
    reverse(ans.begin(), ans.end()); // 反轉字串得到正確結果
    return ans;
}


// 解法02
string addBinary(string a, string b) {
    string ans = "";
    int carry = 0; // 進位

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    // 找最大數->知道要加幾次
    int n = max(a.size(), b.size());
    for(int i=0;i<n;i++){
        int sum = carry;  // 先加上前一輪的進位
        ///// 每一位計算過程 /////
        if(i<a.size() && a[i]=='1') sum+=1; // a要怎要的條件，才能讓sum+1呢
        if(i<b.size() && b[i]=='1') sum+=1; // b要怎要的條件，才能讓sum+1呢
    
        // ans處理結果
        ans += (sum % 2) + '0';
        carry = sum/2;
    }
    // 處理carry最後
    if(carry) ans += '1';
    reverse(ans.begin(), ans.end());
    
    return ans;
}

