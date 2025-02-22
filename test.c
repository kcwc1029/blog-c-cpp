#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}
