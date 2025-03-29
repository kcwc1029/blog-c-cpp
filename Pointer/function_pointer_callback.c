#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

void calc(int a, int b, int (*op)(int, int)) {
    printf("Result: %d\n", op(a, b));
}

int main() {
    calc(10, 5, add);      // 輸出: Result: 15
    calc(10, 5, subtract); // 輸出: Result: 5
    return 0;
}