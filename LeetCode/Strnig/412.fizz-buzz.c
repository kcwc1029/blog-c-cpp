#include <stdio.h>
#include <stdlib.h>

// 交換兩個字元的函式
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// 反轉字串函式
void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        swap(&s[left], &s[right]); // 呼叫 swap 來交換
        left++;
        right--;
    }
}

int main() {
    // 測試範例
    char test01[] = "hello";
    char test02[] = "Hannah";
    int size1 = sizeof(test01) - 1; // 減 1 去掉 '\0'
    int size2 = sizeof(test02) - 1;

    // 反轉字串
    reverseString(test01, size1);
    reverseString(test02, size2);
    printf("%s\n", test01);
    printf("%s\n", test02);

    return 0;
}
