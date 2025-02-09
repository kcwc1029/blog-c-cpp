#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char source[] = "This is a string.";
    char destination[4];
    strncpy(destination, source, 3);
    destination[3] = '\0';
    printf("source <%s>\n", source);
    printf("strlen(source) = %d\n",strlen(source)); // 17
    printf("sizeof(source) = %zu\n", sizeof(source)); // 18
    printf("destination <%s>\n",destination);
    return 0;
}

// 輸出
// source <This is a string.>
// strlen(source) = 17
// sizeof(source) = 18
// destination <Thi>