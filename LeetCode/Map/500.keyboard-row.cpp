vector<string> findWords(vector<string>& words) {
    vector<string> v = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    unordered_map<char, int> m;
    for (int row = 0; row < v.size(); row++) {
        for (char c : v[row]) {
            m[c] = row;                // 小寫字母
            m[toupper(c)] = row;       // 加上大寫字母對應
        }
    }

    // 做完map
    vector<string> ans;
    for(string word:words){
        bool flag = true;
        int row = m[word[0]]; // 取出第一個字
        for(char c:word){
            if(m[c] != row){
                flag = false;
                break;
            }
        }
        // flag==true -> 同一行 -> 加入ans
        if(flag){
            ans.push_back(word);
        }
    }
    return ans;
}