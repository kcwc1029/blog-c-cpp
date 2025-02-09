// TODO: 由於 argv[] 存的都是字串，如果想要處理數字，必須手動轉換：
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {  // 確保有兩個數字
        printf("使用方式: %s 數字1 數字2\n", argv[0]);
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("數字1: %d\n", num1);
    printf("數字2: %d\n", num2);
    printf("總和: %d\n", num1 + num2);
    return 0;
}

// 輸入
// .\test.exe 10 20

// 輸出
// 數字1: 10
// 數字2: 20
// 總和: 30