#include <stdio.h>
#include <stdlib.h>
int main() {
    // a1 <- p1 <- p2
    int a1 = 10;       // 定義整數變數 a1
    int *p1 = &a1;     // 定義指向 a1 的指標 p1
    int **p2 = &p1;    // 定義指向 p1 的指標 p2

    puts("元素\t地址\t\t值");
    printf("a1:\t %p\t %d\n", &a1, a1);
    printf("p1:\t %p\t %p\t %d\n", &p1, p1, *p1);
    printf("p2:\t %p\t %p\t %p\n", &p2, p2, *p2);

    // 解釋 p2 解引用兩次的值（即 a1 的值）
    printf("**p2: %d\n", **p2);
    return 0;
}