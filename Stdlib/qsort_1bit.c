#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 定義數字結構
typedef struct number {
    int value;  // 數值
    int bit;    // 該數字的二進制 "1" 的數量
} Number;



// TODO: 計算 n 在 二進制表示法 中有幾個 1
int numberBit(int n)
{
    int bit = 0;
    for (int i = 0; i < sizeof(int) * 8; i++) {
        if ((n & 1) != 0)  // 檢查 n 的最後一位是否為 1
        bit++;
        n >>= 1;  // 右移一位，繼續檢查下一位
    }
    return bit;
}

int compare(const void *ptr1, const void *ptr2){
    Number *num1 = (Number *)ptr1;
    Number *num2 = (Number *)ptr2;
    // 依據 "1" 的數量排序
    if (num1->bit != num2->bit) {
        return num1->bit - num2->bit;  // bit 少的排前面
    }
    // 若 "1" 的數量相同，則按數值大小排序
    return num1->value - num2->value;
}

#define ARRAYSIZE 5
int main(void){
    Number numbers[ARRAYSIZE] = {
        {1, 0},   // 1   -> 1 個 "1"
        {5, 0},   // 5   -> 2 個 "1"
        {11, 0},  // 11  -> 3 個 "1"
        {10, 0},  // 10  -> 2 個 "1"
        {12, 0}   // 12  -> 2 個 "1"
    };
    // 計算每個數字的 "1" 的數量
    for (int i = 0; i < ARRAYSIZE; i++) {
        numbers[i].bit = numberBit(numbers[i].value);
    }
    // 使用 qsort 進行排序
    qsort(numbers, ARRAYSIZE, sizeof(Number), compare);
    for (int i = 0; i < ARRAYSIZE; i++){
        printf("數值: %d, 1的數量: %d\n", numbers[i].value, numbers[i].bit);
    }
    return 0;
}
// 輸出
// 數值: 1, 1的數量: 1
// 數值: 5, 1的數量: 2
// 數值: 10, 1的數量: 2
// 數值: 12, 1的數量: 2
// 數值: 11, 1的數量: 3
