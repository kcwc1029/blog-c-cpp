// TODO: 12生肖陣列排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // 12生肖
    char zodiac[12][10]={"rat", "ox", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    // bubble sort
    int n = 12;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < (n-i-1); j++){
            if (strcmp(zodiac[j], zodiac[j + 1]) > 0){
                // 字串交換
                char temp[10];
                strcpy(temp, zodiac[j]);
                strcpy(zodiac[j], zodiac[j + 1]);
                strcpy(zodiac[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%s\n", zodiac[i]);
    }
    return 0;
}