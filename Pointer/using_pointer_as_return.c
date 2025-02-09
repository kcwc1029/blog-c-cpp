#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 10

int *firstPositive(int *ptr){
    while (*ptr == 0){
        ptr++; // 如果是0的話就往後
    }
    return ptr;
}

int main(void){
    int array[ARRAYSIZE]={0,0,0,5,9,0,0,6,0,2};
    int *iptr = firstPositive(array);
    printf("*iptr = %d\n", *iptr);
    printf("iptr - array = %ld\n", iptr - array);
    iptr = firstPositive(&(array[5]));
    printf("*iptr = %d\n", *iptr);
    printf("iptr - array = %ld\n", iptr - array);
    return 0;
}

// 輸出
// *iptr = 5
// iptr - array = 3
// *iptr = 6
// iptr - array = 7