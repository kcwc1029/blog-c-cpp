// 解法01：跟除2一樣，去除他
bool isPowerOfFour(int n) {
    if(n==0) return false;
    while(n%4==0){
        n/=4;
    }
    return n==1;
}


// 解法02
// 先把他開平方(4就變成2)
// 然後就使用跟2得幕次方一樣解法
bool check01(int n){
    int x = (int)sqrt(n);
    return pow(x,2)==n;
}

bool check02(int n){
    int x = (int)sqrt(n);
    return (n ^ (n & -n)) == 0;
}

bool isPowerOfFour(int n) {
    if(n==0) return false;
    int x = (int)sqrt(n);
    return check01(n) && check02(n);
}