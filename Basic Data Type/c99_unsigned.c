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
// //sizeof(uint8_t) = 1
// sizeof(uint16_t) = 2
// sizeof(uint32_t) = 4
// sizeof(uint64_t) = 8
// UINT8_MAX = 255
// UINT16_MAX = 65535
// UINT32_MAX = 4294967295
// UINT64_MAX = 4294967295t) = 8