#include <stdio.h>
#include <stdlib.h>

// malloc() 失敗時會返回 NULL，可以用來檢查記憶體分配是否成功。

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int)); // 分配 5 個整數的記憶體

    if (ptr == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    } else {
        printf("Memory Allocation Succeeded\n");
        free(ptr); // 記得釋放記憶體
    }

    return 0;
}