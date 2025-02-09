#include <stdio.h>
#include <stdlib.h>

int main() {
    int no [4] = {10, 12, 14, 16};
    printf("%p\n", no); // 陣列本身地址 = 陣列第一個元素的地址
    printf("%d\n", *(no)); // 取值


    int num[2][4]= {
        312, 16, 35, 65,
        52, 111, 77, 80
    };
    // 計算行數與列數
    size_t m = sizeof(num) / sizeof(num[0]);
    size_t n = sizeof(num[0]) / sizeof(num[0][0]);


    printf("%p\n", *(num+1)); //
    printf("%p\n", *(num+1)+1); //
    printf("%d\n", *(*(num+1)+1)); //

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", *(*(num+i)+j));
        }
    }
    return 0;
}