#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hammingWeight(int n) {
    int ans = 0;
    for(int i=0;i<32;i++){
        if(n&1 == 1) ans ++;
        n>>=1;
    }
    return ans;
}

int main() {
    int n = 11;
    int result = hammingWeight(n);
    printf("%d\n", result);

    n = 128;
    result = hammingWeight(n);
    printf("%d\n", result);

    n = 2147483645;
    result = hammingWeight(n);
    printf("%d\n", result);

    return 0;
}
