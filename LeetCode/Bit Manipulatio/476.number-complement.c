int findComplement(int num) {
    int ans = 0;
    // 建立mask
    int mask = 0;
    // 複製一個num拿來做mask
    int copy_num = num;
    while(copy_num){
        mask = (mask<<1)|1;
        copy_num>>=1;
    }
    ans = (~num)&mask;
    return ans;
}