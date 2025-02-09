// TODO: 計算字串長度，並倒者印出字串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRINGLEN 80

int main(void){
    char string[] = "abcdefg";

    int length = strlen(string);
    printf("%d\n", length);
    // 將字串左右顛倒
    for (int i = 0; i < length / 2; i++) {
        char temp = string[i];
        string[i] = string[length -i - 1];
        string[length - i - 1] = temp;
    }
    printf("%s\n", string);
    return 0;
}

// 輸出
// 7
// gfedcba