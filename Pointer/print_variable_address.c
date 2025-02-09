// TODO: 分別取址跟取值
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 110;
    char ch = 'A';
    printf("nun\t %d\t %p\n", num, &num);
    printf("ch\t %d\t %c\t %p\n", ch, ch, &ch);
    return 0;
}