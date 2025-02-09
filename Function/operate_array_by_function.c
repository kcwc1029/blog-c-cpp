// TODO: 將陣列各數值+1
#include <stdio.h>
#include <stdlib.h>
#define ASIZE 5

void printArray(int array[], int n){
    printf("array is at %p\n", array);
    for (int i = 0; i < n; i++){
        printf("array[%d] = %d ", i, array[i]);
    }
    printf("\n");
    return;
}

void addArray(int array[], int n){
    printf("array is at %p\n", array);
    for (int i = 0; i < n; i++){
        array[i]++;
    }
}

int main(void){
    int a[ASIZE] = {2,4,6,8,10};
    printf("印出a陣列 = %p\n", a); // 相當於印出a[0]的地址
    printArray(a, ASIZE);
    addArray(a, ASIZE);
    printArray(a, ASIZE);
    return 0;
}

// 輸出
// 印出a陣列 = 0061FF0C
// array is at 0061FF0C
// array[0] = 2 array[1] = 4 array[2] = 6 array[3] = 8 array[4] = 10
// array is at 0061FF0C
// array is at 0061FF0C
// array[0] = 3 array[1] = 5 array[2] = 7 array[3] = 9 array[4] = 11