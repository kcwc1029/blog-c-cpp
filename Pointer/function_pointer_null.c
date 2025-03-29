#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*fptr)(int, int) = NULL;
    if (fptr != NULL) {
        printf("%d\n", fptr(5, 3));
    } else {
        printf("Pointer is NULL\n"); // 輸出這句
    }
    fptr = add;
    if (fptr != NULL) {
        printf("%d\n", fptr(5, 3)); // 輸出 8
    }
    return 0;
}