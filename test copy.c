#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*p)[3] = arr; // 指向整個arr，p的型別是指向[3]陣列

    /*       p -> int (*)[3]
     *        (p+0)                                  (p+1)
     *        v                                      v
     *       _____________________________________  ____________________________________
     * arr = 1,            2,          3          | 4,            5,          6
     *       ^             ^           ^            ^             ^           ^          
     *       (*(p+0)+0)    (*(p+0)+1)  (*(p+0)+2)   (*(p+1)+0)    (*(p+1)+1)  (*(p+1)+2) 
     */

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);
        }
    }

    return 0;
}