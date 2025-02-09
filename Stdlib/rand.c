#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));  // 設定種子為當前時間
    printf("隨機數 1: %d\n", rand());
    printf("隨機數 2: %d\n", rand());
    printf("隨機數 3: %d\n", rand());
    return 0;
}

// 輸出
// 隨機數 1: 20554
// 隨機數 2: 631
// 隨機數 3: 10756