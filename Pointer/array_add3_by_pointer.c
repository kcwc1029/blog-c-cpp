// 將陣列元素+3
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[] = {1,2,3,4,5};
    // 建立指標
    int *ptr = a;
    for (int i = 0; i < 5; i++){
        printf("%p\n", ptr); // 印出元素地址
        *ptr +=3; // 透過指標取值的方式+3
        ptr++; // 指標往下一個邁進
    }

    for (int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}

// 輸出
// 0061FF00
// 0061FF04
// 0061FF08
// 0061FF0C
// 0061FF10
// a[0] = 4
// a[1] = 5
// a[2] = 6
// a[3] = 7
// a[4] = 8