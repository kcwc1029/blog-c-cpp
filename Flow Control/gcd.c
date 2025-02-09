#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k;
    scanf("%d%d", &i, &j);
    while (i % j != 0) {
        k = i % j;
        i = j;
        j = k;
    }
    printf("%d\n", j);
}