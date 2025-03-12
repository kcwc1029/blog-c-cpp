string toLowerCase(string s) {
    int n = s.size();
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
    }
    return s;
}