// TODO: 一個字元占1個位元，80個字元占80個位元
#include <stdio.h>
#include <stdlib.h>

#define STRINGLEN 80
int main(void)
{

    char s[STRINGLEN];
    printf("%ld\n", sizeof(s));
    return 0;
}