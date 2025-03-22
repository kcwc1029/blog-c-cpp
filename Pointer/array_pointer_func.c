#include <stdio.h>

void f1(int arr[]) {
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%p ", &arr[i]);
    }
    printf("\n");
}

void f2(int *arr) {
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%p ", &arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    f1(arr);
    f2(arr);
    return 0;
}
// 1 2 3 4 5
// 0x7ffffcc00 0x7ffffcc04 0x7ffffcc08 0x7ffffcc0c 0x7ffffcc10
// 1 2 3 4 5
// 0x7ffffcc00 0x7ffffcc04 0x7ffffcc08 0x7ffffcc0c 0x7ffffcc10