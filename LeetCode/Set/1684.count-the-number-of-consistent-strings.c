#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <stdbool.h>


int countConsistentStrings(char* allowed, char** words, int wordsSize) {
    int mask = 0;
    int allowedSize = strlen(allowed);
    for (int i = 0; i < allowedSize; i++) {
        mask |= 1 << (allowed[i] - 'a');
    }
    
    int ans = 0;
    for(int i=0;i<wordsSize;i++){
        int temp_mask = 0;
        int wordSize = strlen(words[i]);
        for(int j=0;j<wordSize;j++){
            temp_mask |= 1 << (words[i][j] - 'a');
        }
        if ((temp_mask | mask) == mask){
            ans++;
        }
    }
    return ans;
}


int main() {
    // 測試案例 1
    char* allowed = "ab";
    char* words[] = {"ad","bd","aaab","baa","badab"};
    int result = countConsistentStrings(allowed, words, 5);
    printf("%d\n", result);

    // 測試案例 2
    allowed = "abc";
    char* words2[] = {"a","b","c","ab","ac","bc","abc"};
    result = countConsistentStrings(allowed, words2, 7);
    printf("%d\n", result);

    // 測試案例 2
    allowed = "cad";
    char* words3[] = {"cc","acd","b","ba","bac","bad","ac","d"};
    result = countConsistentStrings(allowed, words3, 8);
    printf("%d\n", result);

    return 0;
}



