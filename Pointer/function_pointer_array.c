#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    int (*farr[])(int, int) = {add, sub, mul};
    printf("Add: %d\n", farr[0](10, 5)); // 輸出: 15
    printf("Sub: %d\n", farr[1](10, 5)); // 輸出: 5
    printf("Mul: %d\n", farr[2](10, 5)); // 輸出: 50
    return 0;
}