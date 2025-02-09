#include <iostream>
#include <cstdint> // 需要引入
using namespace std;

int main(void){
    cout << "sizeof(int8_t) = " << sizeof(int8_t) << endl;
    cout << "sizeof(int16_t) = " << sizeof(int16_t) << endl;
    cout << "sizeof(int32_t) = " << sizeof(int32_t) << endl;
    cout << "sizeof(int64_t) = " << sizeof(int64_t) << endl;
    cout << "INT8_MIN = " << INT8_MAX << endl;
    cout << "INT16_MIN = " << INT16_MAX << endl;
    cout << "INT32_MIN = " << INT32_MAX << endl;
    cout << "INT64_MIN = " << INT64_MAX << endl;
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