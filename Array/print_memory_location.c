// TODO: 印出記憶體位置：要使用%p

#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 5

int main() {
    int a[ARRAYSIZE];
    printf("%ld\n", sizeof(a[0]));
    printf("%ld\n", sizeof(a));
    for (int i = 0; i < ARRAYSIZE; i++){
        printf("%p\n", &(a[i]));
    }
    return 0;
}

// 輸出
// 4
// 20
// 0061FF08
// 0061FF0C
// 0061FF10
// 0061FF14
// 0061FF18