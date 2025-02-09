#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("參數數量: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
// 輸入
// .\test.exe apple banana orange

// 輸出
// 參數數量: 4
// argv[0] = D:\github\blog\c++\test.exe
// argv[1] = apple
// argv[2] = banana
// argv[3] = orange