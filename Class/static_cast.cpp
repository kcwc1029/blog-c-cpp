#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    
    // ✅ 使用 `static_cast` 轉換
    // 它會在編譯時檢查型別是否兼容
    int int_pi = static_cast<int>(pi);
    
    cout << "int_pi = " << int_pi << endl;
    return 0;
}
