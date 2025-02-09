#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 5

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("a[%d] = %d (Address: %p)\n", i, a[i], (void*)&a[i]);
    }
    printf("\n");
}

int main(void){
    int a[ARRAYSIZE]={1,2,3,4,5};
    int *ptr = a;
    // TODO: 利用ptr[i] 修改值
    for (int i = 0; i < 5; i++){
        ptr[i] += 3;
    }
    printArray(a, ARRAYSIZE);

    // TODO: 利用ptr[i] 修改值
    ptr = &(a[0]);
    for (int i = 0; i < 5; i++){
        ptr[i] += 3;
    }
    printArray(a, ARRAYSIZE);
    return 0;
}