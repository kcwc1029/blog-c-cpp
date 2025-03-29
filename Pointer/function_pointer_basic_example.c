#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fptr)(int, int); // 宣告
    fptr = &add;           // 初始化（或 fptr = add;）
    printf("%d\n", fptr(5, 3)); // 透過指針呼叫，輸出 8
    return 0;
}