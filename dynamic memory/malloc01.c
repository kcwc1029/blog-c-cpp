#include <stdio.h>
#include <stdlib.h> // malloc, free 所在的標頭檔

int main() {
    int *ptr = (int *) malloc(sizeof(int)); // 分配一個 int 大小的記憶體
    if (ptr == NULL) {  // 確保分配成功
        printf("記憶體分配失敗!\n");
        return 1;
    }

    *ptr = 10;  // 使用分配的記憶體
    printf("動態記憶體中的值: %d\n", *ptr);

    free(ptr);  // 釋放記憶體
    return 0;
}