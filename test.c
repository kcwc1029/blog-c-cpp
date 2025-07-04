#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LEN 20

int main() {
    char names[SIZE][LEN] = {
        "banana",
        "apple",
        "grape",
        "kiwi",
        "melon"
    };

    // Bubble Sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[LEN];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("排序後的字串：\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
