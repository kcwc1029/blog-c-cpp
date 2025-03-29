bool hasAlternatingBits(int n) {
    long int num = n^(n>>1);
    return (num & (num+1)) == 0;
}