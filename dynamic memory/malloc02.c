// NOTE: 無法執行
#include <stdio.h>
#include <stdlib.h> // malloc, free 所在的標頭檔

int main() {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    // ...
    free(ptr);  // 釋放記憶體
    return 0;
}