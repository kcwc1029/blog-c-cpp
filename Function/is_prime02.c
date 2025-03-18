#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int N) {
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}



int main() {
    int N = 10;
    printf("Is %d prime?\n", N);

    if (isPrime(N)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}