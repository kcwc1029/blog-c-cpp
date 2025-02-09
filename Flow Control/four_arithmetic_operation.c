// TODO:  輸入三個參數：被加數、加數、規則
// 0：加法
// 1：減法
// 2：乘法
// 3：除法
#include <stdio.h>
#include <stdlib.h>

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4

int main() {
    int a, b, c, d; // a 和 b 是操作數，c 是運算符，d 是結果
    printf("請輸入兩個整數和運算符（0:加法, 1:減法, 2:乘法, 3:除法, 4:取餘數）：\n");
    scanf("%d%d%d", &a, &b, &c);

    switch (c) {
        case ADD:
            d = a + b;
            printf("結果: %d\n", d);
            break;
        case SUB:
            d = a - b;
            printf("結果: %d\n", d);
            break;
        case MUL:
            d = a * b;
            printf("結果: %d\n", d);
            break;
        case DIV:
            if (b == 0) {
                printf("錯誤: 除數不能為零\n");
            } else {
                d = a / b;
                printf("結果: %d\n", d);
            }
            break;
        case MOD: // 取餘數
            if (b == 0) { // 處理除以零的情況
                printf("錯誤: 除數不能為零\n");
            } else {
                d = a % b;
                printf("結果: %d\n", d);
            }
            break;
        default: // 無效的運算符
            printf("錯誤: 無效的運算符\n");
            break;
    }

    return 0;
}