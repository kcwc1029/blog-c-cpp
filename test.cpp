#include <iostream>
using namespace std;

int main() {
    int i = 2147483647;  // 最大值（32-bit int）

    cout << "sizeof(i) = " << sizeof(i) << " bytes" << endl;
    cout << "原始值：i = " << i << endl; // 2147483647

    i++;  // 溢位
    cout << "i++ 後：i = " << i << endl; // -2147483648
    return 0;
}
