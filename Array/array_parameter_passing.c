#include <stdio.h>
#include <stdlib.h>
#define ASIZE 3
#define BSIZE 5

void printArray(int array[], int n){
    printf("array is at %p\n", array);
    for (int i = 0; i < n; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    return;
}


int main(void){
    int a[ASIZE] = {3,5,7};
    int b[BSIZE] = {2,4,6,8,10};
    printf("印出a陣列 = %p\n", a); // 相當於印出a[0]的地址
    printf("印出b陣列 = %p\n", b);

    printArray(a, ASIZE);
    printArray(b, BSIZE);
    return 0;
}

// 輸出
// 印出a陣列 = 0061FF14
// 印出b陣列 = 0061FF00
// array is at 0061FF14
// array[0] = 3
// array[1] = 5
// array[2] = 7
// array is at 0061FF00
// array[0] = 2
// array[1] = 4
// array[2] = 6
// array[3] = 8
// array[4] = 10