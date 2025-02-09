#include <iostream>
using namespace std;

class FinalClass final {  // ✅ `final` 阻止類別被繼承
public:
    void display() {
        cout << "This is a final class\n";
    }
};

class Derived : public FinalClass {  // ❌ 錯誤：`FinalClass` 無法被繼承！
};
    
    
// error
// .\test.cpp:11:7: 錯誤：cannot derive from 「final」 base 「FinalClass」 in derived type 「Derived」