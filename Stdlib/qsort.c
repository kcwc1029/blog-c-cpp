#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 10

int compare(const void *data1,const void *data2){
    int *ptr1 = (int *)data1;
    int *ptr2 = (int *)data2;
    if (*ptr1 < *ptr2){
        return -1;
    }else if(*ptr1 > *ptr2){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int array[] = {8,5,1,2,3,6,5,7,8,0,1};
    int length = sizeof(array)/sizeof(array[0]);
    qsort(array, length, sizeof(int), compare);
    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
// 輸出
// 0 1 1 2 3 5 5 6 7 8 8 