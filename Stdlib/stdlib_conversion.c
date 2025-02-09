#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char string1[] = "12234";
    printf("atoi(string1) = %d\n", atoi(string1));

    char string2[] = "1223456";
    printf("atol(string2) = %ld\n", atol(string2));

    char string3[] = "122345.6";
    printf("atof(string3) = %f\n", atof(string3));

    char string4[] = "123 abc";
    char *ptr;
    printf("strtol(string4) = %ld\n", strtol(string4, &ptr, 10));
    printf("Remaining part of string4: %s\n", ptr);

    char string5[] = "123 abc";
    printf("strtol(string5) with base 10 = %ld\n", strtol(string5, NULL, 10));
    return 0;
}

// 輸出
