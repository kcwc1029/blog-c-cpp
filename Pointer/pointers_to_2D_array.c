#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
  
  	// pointer to above array
  	int (*ptr)[2][3] = &arr;

  	// Traversing the arry using ptr
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                printf("%d ", (*ptr)[i][j]);
        }
        printf("\n");
    }

    return 0;
}
