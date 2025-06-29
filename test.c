#include <iostream>
// #include <iomanip>  // 為了使用 hex 輸出
using namespace std;

int main() {
    char c = 'a';
    cout << c << endl; // a
    // cout << static_cast<int>(c) << endl; // 97
    // cout << hex << static_cast<int>(c) << endl; // 0x61
    return 0;
}
