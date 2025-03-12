#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** result = (char**)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i - 1] = strdup("FizzBuzz");
        } else if (i % 3 == 0) {
            result[i - 1] = strdup("Fizz");
        } else if (i % 5 == 0) {
            result[i - 1] = strdup("Buzz");
        } else {
            result[i - 1] = (char*)malloc(12 * sizeof(char)); // 預留 12 個字元（包含 '\0'）
            sprintf(result[i - 1], "%d", i);
        }
    }
    return result;
}

int main() {
    int n = 15;
    int returnSize;
    char** result = fizzBuzz(n, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%s ", result[i]);
    }
    free(result); // 釋放整個陣列

    return 0;
}
