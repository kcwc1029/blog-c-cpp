#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'r';
    char str[] = "Hello, World!"; // \0 結尾
    printf("%c\n", c);
    printf("%s\n", str);
    
    // 印出每個型別的實際大小
    printf("sizeof： %ld bytes\n", sizeof(c)); // 1byte
    printf("sizeof： %ld bytes\n", sizeof(str)); // 14byte 
    return 0;
}
