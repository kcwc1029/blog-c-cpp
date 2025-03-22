int countBits(int n){
    int ans = 0;
    while(n){
        n = (n&(n-1));
        ans++;
    }
    return ans;
}

char** readBinaryWatch(int turnedOn, int *returnSize) {
    // 宣告字串=>字元陣列
    char** ans = (char**)malloc(720 * sizeof(char*));
    int count = 0; // 控制 ans的索引

    for(int i=0;i<12;i++){
        for(int j=0;j<60;j++){
            if (countBits(i) + countBits(j) == turnedOn){
                char* time = (char*)malloc(6 * sizeof(char));  // "hh:mm\0"
                if(j>=10){
                    sprintf(time, "%d:%d", i, j);
                }else{
                    sprintf(time, "%d:0%d", i, j);
                }
                ans[count] = time;
                count++;
            }
        }
    }
    *returnSize = count;
    return ans;
}