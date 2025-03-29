#include <stdio.h>

void change_pointer(int **dptr, int *new_ptr) {
    *dptr = new_ptr; // 修改指針的值
}

int main() {
    int a = 10, b = 20;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("Before: %d\n", *ptr); // 輸出 10
    change_pointer(dptr, &b);
    printf("After: %d\n", *ptr);  // 輸出 20

    return 0;
}