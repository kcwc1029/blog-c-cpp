int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // 清除最低位的 1
        count++;
    }
    return count;
}

// 製作質數表 => int 空間只有32，但側資到1000000，開平方也到1000
// bool* isPrimeTable(int max) {
//     bool* isPrime = (bool*)malloc((max + 1) * sizeof(bool));
//     for (int i = 0; i <= max; i++) {
//         isPrime[i] = true;
//     }
//     isPrime[0] = false;
//     isPrime[1] = false;
//     for (int i = 2; i * i <= max; i++) {
//         if (isPrime[i]) {
//             for (int j = i * i; j <= max; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return isPrime;
// }

bool isPrimeTable(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}


int countPrimeSetBits(int left, int right) {
    int ans=0;
    for (int i = left; i <= right; i++){
        if(isPrimeTable(countOnes(i))){
            ans++;
        }
    }
    return ans;
}