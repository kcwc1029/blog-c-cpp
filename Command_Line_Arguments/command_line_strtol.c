#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("使用方式: %s 數字1 數字2\n", argv[0]);
        return 1;
    }

    char *endptr1, *endptr2;
    long num1 = strtol(argv[1], &endptr1, 10);
    long num2 = strtol(argv[2], &endptr2, 10);

    if (*endptr1 != '\0' || *endptr2 != '\0') {
        printf("錯誤: 請輸入有效數字\n");
        return 1;
    }

    printf("總和: %ld\n", num1 + num2);
    return 0;
}
