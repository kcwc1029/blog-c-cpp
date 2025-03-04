#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FIBARRAYSIZE 100

int main() {
    int n;
    scanf("%d", &n);
    assert(n >= 2 && n < FIBARRAYSIZE);
    int fab[FIBARRAYSIZE];
    fab[0] = 1, fab[1] = 1;
    for (int i = 2; i < n; i++){
        fab[i] = fab[i - 1] + fab[i - 2];
    }
    // 輸出
    for (int i = 0; i < n; i++){
        printf("%d\t", fab[i]);
    }
    return 0;
}