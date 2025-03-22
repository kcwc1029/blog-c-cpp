char* toHex(int num) {
    if(num==0)return "0";
    char *s = "0123456789abcdef";
    char *ans = (char*)malloc(9 * sizeof(char)); // 32/4bit + '\0'
    int count = 7;
    ans[8] = '\0'; // 設定字串結尾

    unsigned int n = num;
    while (n) {
        int digit = n % 16; 
        ans[count] = s[digit];
        count--;
        n/=16;
    }
    return &ans[count+1];
}