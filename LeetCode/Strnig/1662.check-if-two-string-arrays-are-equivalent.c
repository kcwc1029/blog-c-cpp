#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// 串接字串
char* strCat(char** words, int wordsSize){
    // 計算總長度
    int totalLength = 0;
    for(int i=0;i<wordsSize;i++){
        totalLength += strlen(words[i]);
    }
    char* ans = (char*)malloc((totalLength + 1) * sizeof(char));
    ans[0] = '\0'; // strcat會從dest中去找'\0'，進行拼接

    // 拼接字串
    for (int i = 0; i < wordsSize; i++) {
        strcat(ans, words[i]);
    }
    return ans;
}

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    // word1, word2 兩個字串陣列
    // word1Size word2Size 
    char* str01 = strCat(word1, word1Size);
    char* str02 = strCat(word2, word2Size);
    bool isEqual = (strcmp(str01, str02) == 0);
    return isEqual;
}

void print(int *result, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", result[i]); 
    }
    printf("\n");
    free(result); // 釋放整個陣列
}

int main() {
    // 測試案例 1
    char* word1[] = {"ab", "c"};
    char* word2[] = {"a", "bc"};
    int word1Size = 2;
    int word2Size = 2;

    if (arrayStringsAreEqual(word1, word1Size, word2, word2Size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    // 測試案例 2
    char* word3[] = {"a", "cb"};
    char* word4[] = {"ab", "c"};
    int word3Size = 2;
    int word4Size = 2;

    if (arrayStringsAreEqual(word3, word3Size, word4, word4Size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}