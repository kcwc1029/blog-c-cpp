#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char string1[80] = "programming";
    char string2[] = "programming";
    char *string3 = "programming";
    strcpy(string1, "more programming");
    strcpy(string2, "more programming");
    strcpy(string3, "more programming"); // error，因為字串常量放在.rodata，不能錯修改
    return 0;
}