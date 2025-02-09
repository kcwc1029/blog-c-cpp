// TODO: 手刻strlen
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *string){
    int i = 0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}

int main(void){
    char string[] = "abcdefg";
    int length = mystrlen(string);
    printf("%d\n", length);
    return 0;
}