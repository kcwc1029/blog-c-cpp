#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGLEN  10

int main(void){
    char source[] = "abcdefg";
    char destination[STRINGLEN];
    strcpy(destination, source);
    printf("%s\n", destination);
    return 0;
}