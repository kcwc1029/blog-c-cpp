#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // 靜態變數（不屬於個別物件）
};

// ✅ 必須在類別外初始化靜態變數
int Counter::count = 0;
    
int main() {
    Counter::count++;  // ✅ 使用 `::` 存取靜態變數
    cout << "Count: " << Counter::count << endl; // Count: 1
    return 0;
}
    