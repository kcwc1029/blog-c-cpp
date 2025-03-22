// 解法01：用乘法的方式
bool isPowerOfTwo(int n) {
    if(n==0) return false;
    long int ans = 1;
    for(int i=0;i<31;i++){
        if(ans==n)return true;
        else if(ans>n) break;
        ans<<=1;
    }
    return false;
}

// 解法02：用除法的方式
bool isPowerOfTwo(int n) {
    if(n==0) return false;
    while(n%2==0){
        n>>=1;
    }
    
}