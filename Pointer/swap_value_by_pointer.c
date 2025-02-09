#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int i=1;
    int j=2;
    swap(&i, &j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}