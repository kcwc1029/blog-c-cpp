#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[5] = {1,2,3,4,5};
    size_t length = sizeof(num) / sizeof(num[0]);
    puts("長度   元素    地址");
    for(int i=0;i<length;i++){
        printf("%d\t %d\t %p\n", i, num[i], &num[i]);
    }
    return 0;
}