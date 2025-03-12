char* toLowerCase(char* s) {
    int n = strlen(s);
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
    }
    return s;
}