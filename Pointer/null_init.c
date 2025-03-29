#include <stdio.h>

int main() {
    int *ptr = NULL; // 初始化為 NULL

    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    } else {
        printf("Pointer is not NULL\n");
    }

    return 0;
}