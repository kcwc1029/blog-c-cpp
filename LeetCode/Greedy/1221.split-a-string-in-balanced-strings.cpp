int balancedStringSplit(string s) {
    int count = 0; // 用count來記錄目前"RL"的平衡數量
    int ans = 0; // 當 count == 0 時，代表目前的子字串是平衡的，可以分割 => ans++
    for(char c:s){
        if(c=='R')count++;
        else count--;
        if(count==0) ans++;
    }
    return ans;
}