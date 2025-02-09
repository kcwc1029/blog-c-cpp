// 變數i為實際參數(actual parameter)
// 變數j為實際參數(formal parameter)
#include <stdio.h>
#include <stdlib.h>

void test(int j){
    printf("變數j的值 = %d\n",j);
    printf("變數j的地址 = %p\n", &j);
    j++;
    return;
}
int main(void){
    int i;
    scanf("%d", &i);
    printf("變數i的值 = %d\n",i);
    printf("變數i的地址 = %p\n", &i);
    test(i);
    printf("變數i的值 = %d\n",i);
    printf("變數i的地址 = %p\n", &i);
    return 0;
}

// 輸入
// 25
// 輸出
// 變數i的值 = 25
// 變數i的地址 = 0061FF1C
// 變數j的值 = 25
// 變數j的地址 = 0061FF00
// 變數i的值 = 25
// 變數i的地址 = 0061FF1C