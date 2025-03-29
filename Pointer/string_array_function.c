#include <stdio.h>

void print_strings(char **arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char *arr[] = {"Geek", "Geeks", "Geekfor"};
    print_strings(arr, 3);
    return 0;
}