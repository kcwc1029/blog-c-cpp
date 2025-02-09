#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *ptr1, const void *ptr2){
    return(strcmp((char *) ptr1, (char *) ptr2));
}

#define ARRAYSIZE 3
int main(void){
    // 12生肖
    char zodiac[12][10]={"rat", "ox", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    qsort(zodiac, 12, sizeof(char)*10, compare);
    for (int i = 0; i < 12; i++){
        puts(zodiac[i]);
    }
    return 0;
}
// 輸出
// dog
// dragon
// hare
// horse
// monkey
// ox
// pig
// rat
// rooster
// sheep
// snake
// tiger