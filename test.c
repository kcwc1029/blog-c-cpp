#include <stdio.h>

int sum(const int a[], const int n){
    int total = 0;
    for (int i = 0; i < n; i++)
        // a[i]++; // 因為a[]設定為const，因此不能更動
        total += a[i];
    return total;
}

#define ARRAYSIZE 5
int main(void){
    int array[ARRAYSIZE];
    for (int i = 0; i < ARRAYSIZE; i++)
        scanf("%d", &(array[i]));
    printf("sum = %d\n", sum(array, ARRAYSIZE));
    return 0;
}