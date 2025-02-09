// TODO: 將路徑中的每個子資料夾名稱抽出
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    // 12生肖
    char zodiac[12][10]={"rat", "ox", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    int n = 12;
    for(int i=0;i<n;i++){
        char *ptr = strstr(zodiac[i], "er");
        // 找到
        if(ptr!=NULL){
            printf("er at %d in %s\n", ptr - zodiac[i], zodiac[i]);
        }else{
            printf("No er in %s\n", zodiac[i]);
        }
    }

    return 0;
}

// 輸出
// No er in rat
// No er in ox
// er at 3 in tiger
// No er in hare
// No er in dragon
// No er in snake
// No er in horse
// No er in sheep
// No er in monkey
// er at 5 in rooster
// No er in dog
// No er in pig