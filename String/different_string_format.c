#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGLEN 80

int main(void){
    char str1[STRINGLEN] = "programming"; // 本身宣告空間80byte
    char str2[] = "programming"; // 給內容，讓編譯器自己算(後面加\0)
    char *str3 = "programming"; // 指針
    printf("sizeof(str1) = %ld\n", sizeof(str1));
    printf("sizeof(str2) = %ld\n", sizeof(str2));
    printf("sizeof(str3) = %ld\n", sizeof(str3));
    return 0;
}

// 輸出
// sizeof(str1) = 80
// sizeof(str2) = 12
// sizeof(str3) = 4