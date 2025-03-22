char findTheDifference(char* s, char* t) {
    int ans = 0;
    // 取得s跟t的長度
    int sSize = strlen(s);
    int tSize = strlen(t);
    for(int i=0;i<sSize;i++){
        ans^=s[i];
    }
    for(int i=0;i<tSize;i++){
        ans^=t[i];
    }
    return (char)ans;
}