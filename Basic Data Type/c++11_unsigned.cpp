#include <iostream>
#include <cstdint> // 需要引入
using namespace std;

int main(void){
    cout << "sizeof(uint8_t) = " << sizeof(uint8_t) << endl;
    cout << "sizeof(uint16_t) = " << sizeof(uint16_t) << endl;
    cout << "sizeof(uint32_t) = " << sizeof(uint32_t) << endl;
    cout << "sizeof(uint64_t) = " << sizeof(uint64_t) << endl;

    cout << "UINT8_MIN = " << UINT8_MAX << endl;
    cout << "UINT16_MIN = " << UINT16_MAX << endl;
    cout << "UINT32_MIN = " << UINT32_MAX << endl;
    cout << "UINT64_MIN = " << UINT64_MAX << endl;
    return 0;
}

// sizeof(int8_t) = 1
// sizeof(int16_t) = 2
// sizeof(int32_t) = 4
// sizeof(int64_t) = 8
// INT8_MIN = 127
// INT16_MIN = 32767
// INT32_MIN = 2147483647
// INT64_MIN = 922337203685477580