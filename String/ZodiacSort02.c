// TODO: 12生肖指標排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // 12生肖
    char zodiac[12][10]={"rat", "ox", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    char *zptr[12];
    int n = 12;
    for (int i = 0; i < n ; i++){
        zptr[i] = zodiac[i];
    }

    // bubble sort    
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < (n-i-1); j++){
            if (strcmp(zptr[j], zptr[j + 1]) > 0){
                char *temp = zptr[j];
                zptr[j] = zptr[j + 1];
                zptr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%s\n", zptr[i]);
    }
    return 0;
}