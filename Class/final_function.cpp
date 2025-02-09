#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() final {  // ✅ `final` 阻止進一步覆寫
        cout << "Base class\n";
    }
};
    
class Derived : public Base {
public:
    void show() override {  // ❌ 錯誤：`final` 禁止覆寫！
        cout << "Derived class\n";
    }
};
    
// error
// .\test.cpp:13:10: 錯誤：virtual function 「virtual void Derived::show()」 overriding final function