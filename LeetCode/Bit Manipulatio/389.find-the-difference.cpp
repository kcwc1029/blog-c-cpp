// 解法 1：map
char findTheDifference(string s, string t) {
    map<char, int> m;
    for(char c:s) m[c]++;
    for(char c:t){
        m[c]--;
        if(m[c]<0)return c;
    }
    return ' ';
}



// 解法 2：位運算
char findTheDifference(string s, string t) {
    int ans = 0;
    for(char ch:s) ans^=ch;
    for(char ch:t) ans^=ch;
    return ans;
}