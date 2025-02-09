#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    scanf("%d%d", &i, &j);
    int temp = i;
    i = j;
    j = temp;
    printf("%d\n", i);
    printf("%d\n", j);
}