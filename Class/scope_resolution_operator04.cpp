#include <iostream>
using namespace std;

int x = 100;  // ✅ 全域變數

int main() {
    int x = 50;  // ❌ 區域變數遮蔽了全域變數
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;  // ✅ 使用 `::x` 存取全域變數
    return 0;
}
