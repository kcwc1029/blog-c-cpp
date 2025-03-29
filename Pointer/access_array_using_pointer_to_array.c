#include <stdio.h>

int main() {
    int arr[3] = { 5, 10, 15 };	
  	int n = sizeof(arr) / sizeof(arr[0]);

    // Declare pointer variable
    int (*ptr)[3];

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = &arr;
	
  	for (int i = 0; i < n; i++)
    	printf("%d ", (*ptr)[i]);

    return 0;
}
