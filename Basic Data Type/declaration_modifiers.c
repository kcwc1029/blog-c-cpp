#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    printf("sizeof(short int) = %ld\n",sizeof(short int));
    printf("sizeof(int) = %ld\n",	 sizeof(int));
    printf("sizeof(long) = %ld\n",	 sizeof(long));
    printf("sizeof(long int) = %ld\n",	 sizeof(long int));
    printf("sizeof(long long int) = %ld\n", 	 sizeof(long long int));
    return 0;
}

// 輸出
// sizeof(short int) = 2
// sizeof(int) = 4
// sizeof(long) = 4
// sizeof(long int) = 4
// sizeof(long long int) = 8