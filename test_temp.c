#include <stdio.h>
#include <stdlib.h>

int main() {
    int no [4] = {10, 12, 14, 16};
    printf("%p\n", no);  // 0x7ffffcbf0 (陣列本身地址 = 陣列第一個元素的地址 )
    printf("%d\n", *(no)); // 10 (取值)


    int num[2][4]= {
        312, 16, 35, 65,
        52, 111, 77, 80
    };

    printf("%p\n", (num)); // 指向 第0行的陣列 -> 0x7ffffcbf0
    printf("%d\n", (num)); // 錯誤用法(為定義行為)
    printf("%p\n", *(num)); // 解參考num，拿到num[0][0]的指標
    printf("%p\n", (num+1)); // 指向 第1行的陣列 -> 0x7ffffcbf0
    printf("%p\n", *(num+1)); // 解參考num，拿到num[1][0]的指標
    printf("%p\n", *(num+1)+1); //  0x7ffffcc04
    printf("%d\n",*(*(num+1)+1)); // 111
    // 如果要拿[0][0]的地址跟值
    printf("%d\n", *(*(num))); // 解參考num，拿到num[0][0]的指標

    // 如果要跑for迴圈
    size_t m = sizeof(num) / sizeof(num[0]);
    size_t n = sizeof(num[0]) / sizeof(num[0][0]);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", *(*(num+i)+j));
        }
    }
    return 0;
}