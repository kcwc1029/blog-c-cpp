#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1; // 指向單一整數（arr[0]）
    int(*p2)[5]; // 指向整個陣列（arr）

    p1 = arr;
    p2 = &arr;
  
  	printf("p1 = %p\n", p1);
  	printf("*p2 = %p\n\n", *p2);

    p1++;
    p2++;
    printf("p1 = %p\n", p1);
  	printf("*p2 = %p", p2);
    return 0;
}
