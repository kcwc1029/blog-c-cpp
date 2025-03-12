
// 解法01
int countConsistentStrings(string allowed, vector<string>& words) {
    // 將string allowed放到set中
    // 方法01
    // set<char> s;
    // for(char c:allowed){
    //     s.insert(c);
    // }
    // 方法02：直接用 allowed 初始化 set
    set<char> s(allowed.begin(), allowed.end());  
    int ans = 0; // 紀錄通過的元素數量

    for(string word:words){
        bool isConsistent = true;  // 標記當前單字是否符合allowed
        for(char c:word){
            if(s.count(c)==0){
                isConsistent = false;
                break;
            }
        }
        // 檢查完當前單字，如果符合，ans+1
        if(isConsistent==true) ans++;
    }
    return ans;
}


// 解法02
int countConsistentStrings(string allowed, vector<string>& words) {
    int mask = 0; // 儲存allowed
    for(char c:allowed){
        mask |= 1 << (c - 'a');
    }
    int ans = 0; // 紀錄通過的元素數量
    for(string word:words){
        int temp_mask=0;
        for(char c:word){
            temp_mask |= 1 << (c - 'a');
        }
        if((temp_mask | mask) == mask) ans++;
    }
    return ans;
}