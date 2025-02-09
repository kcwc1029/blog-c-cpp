#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGLEN 80

int main(void){
    char string[STRINGLEN];
    char *ptr = string;
    scanf("%s", ptr); // 字元指標直接把整串字串輸出
    printf("%s\n", ptr);
    // 用陣列的方式輸出
    for (int i = 0; i < strlen(ptr); i++){
        printf("%c ", ptr[i]);
    }
    return 0;
}

// 輸出
// asdfg
// a s d f g