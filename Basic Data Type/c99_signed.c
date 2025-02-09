#include <stdint.h>


int main(void){
    printf("sizeof(uint8_t) = %ld\n",	 sizeof(uint8_t));
    printf("sizeof(uint16_t) = %ld\n",	 sizeof(uint16_t));
    printf("sizeof(uint32_t) = %ld\n",	 sizeof(uint32_t));
    printf("sizeof(uint64_t) = %ld\n", 	 sizeof(uint64_t));
    printf("UINT8_MAX = %u\n", UINT8_MAX);
    printf("UINT16_MAX = %u\n", UINT16_MAX);
    printf("UINT32_MAX = %u\n", UINT32_MAX);
    printf("UINT64_MAX = %lu\n", UINT64_MAX);
    return 0;
}

// 輸出
// sizeof(short int) = 2
// sizeof(int) = 4
// sizeof(long) = 4
// sizeof(long int) = 4
// sizeof(long long int) = 8
// INT8_MIN = -128 INT8_MAX = 127
// INT16_MIN = -32768 INT16_MAX = 32767
// INT32_MIN = -2147483648 INT32_MAX = 2147483647
// INT64_MIN = 0
// INT64_MAX = -2147483648