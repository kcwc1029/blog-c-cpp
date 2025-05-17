int longestConsecutive(vector<int>& nums) {
    int ans = 0;

    // 建立set
    unordered_set<int> s;
    for(int i:nums){
        s.insert(i);
    }

    // 尋找其點
    // 如果i-1在set中，代表i不是序列起點 => skip
    // 如果i-1不在set中，代表i是某個序列的起點 => 從他開始去往後拚拚看
    for(int i:s){
        if(s.count(i-1)) continue;

        // i 為序列起點
        int x = i+1;
        while(s.count(x)){
            x++;
        }
        // 拚到最長了，跟目前記錄比較
        ans = max(ans, x-i);
    }
    return ans;
}