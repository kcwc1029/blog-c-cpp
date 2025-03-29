
// 解法01：每一次的值，都跑32次去計算有幾個1
int getCount(int n){
    int ans = 0;
    for (int i = 0; i < 32; i++){
        ans += (n & 1);
        n>>=1;
    }
    return ans;
}

int* countBits(int n, int* returnSize) {
    int *ans = (int*)malloc((n + 1) * sizeof(int));
    // ans 是一個 int* 類型的指針，指向動態分配的陣列的首地
    // 因此，函數應該返回 ans，因為它的類型是 int*，符合函數的返回類型
    for(int i=0;i<n+1;i++){
        ans[i] = getCount(i);
    }
    *returnSize = n+1;
    return ans;
}

// 解法02：數1的部分進行優化
int getCount(int n){
    int ans = 0;
    while(n){
        n = n&(n-1);
        ans++;
    }
    return ans;
}

int* countBits(int n, int* returnSize) {
    int *ans = (int*)malloc((n + 1) * sizeof(int));
    // ans 是一個 int* 類型的指針，指向動態分配的陣列的首地
    // 因此，函數應該返回 ans，因為它的類型是 int*，符合函數的返回類型
    for(int i=0;i<n+1;i++){
        ans[i] = getCount(i);
    }
    *returnSize = n+1;
    return ans;
}

// 解法03：DP
int* countBits(int n, int* returnSize) {
    int *ans = (int*)malloc((n + 1) * sizeof(int));
    ans[0]=0;
    // ans 是一個 int* 類型的指針，指向動態分配的陣列的首地
    // 因此，函數應該返回 ans，因為它的類型是 int*，符合函數的返回類型
    int highBit = 0;
    for(int i=1;i<n+1;i++){
        if((i & (i - 1)) == 0){
            highBit = i;
            ans[i]=1;
        }else{
            ans[i] = ans[i-highBit]+1;
        }
        
    }
    *returnSize = n+1;
    return ans;
}