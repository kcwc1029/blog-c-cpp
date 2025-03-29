#include <stdio.h>

int main() {
    int arr[2][3][2] = {
        { {1, 2}, {3, 4}, {5, 6} },
        { {7, 8}, {9, 10}, {11, 12} }
    };

    // Pointer to the 3D array
    int (*ptr)[2][3][2] = &arr;

    // Traversing the 3D array using the pointer
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", (*ptr)[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
