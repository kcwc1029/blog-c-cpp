#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = a;  // ✅ `int` → `double`，隱式轉換

    char c = 'A';
    int ascii = c;  // ✅ `char` → `int`，ASCII 轉換

    cout << "b = " << b << endl;       // 10.0
    cout << "ascii = " << ascii << endl; // 65 ('A' 的 ASCII 值)
    
    return 0;
}
