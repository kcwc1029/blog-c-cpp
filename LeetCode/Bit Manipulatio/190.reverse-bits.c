#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    for (int i = 0; i < 32; i++) {
        ans = (ans << 1) | (n & 1);  // 取出 n 的最低位，放入 ans 的最低位
        n >>= 1;  // 右移 n，把下一個位數移到最低位
    }
    return ans;
}

// 測試函數
int main() {
    uint32_t n = 0b00000010100101000001111010011100; // 測試輸入
    uint32_t result = reverseBits(n);
    printf("反轉後的結果: %u (0x%X)\n", result, result);  // 以十進制 & 十六進制輸出

    n = 0b11111111111111111111111111111101; // 測試輸入
    result = reverseBits(n);
    printf("反轉後的結果: %u (0x%X)\n", result, result);  // 以十進制 & 十六進制輸出
    return 0;
}
