#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // ✅ 虛擬函數
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void show(int x) override {  // ❌ 這裡的參數不同，導致它是新函數，而不是覆寫
        cout << "Derived class\n";
    }
};

int main() {
    Base* obj = new Derived();
    obj->show();  // ✅ 仍然執行 Base::show()，因為 Derived::show(int) 不是覆寫！
    delete obj;
    return 0;
}
// error
// .\test.cpp:13:10: 錯誤：「void Derived::show(int)」 marked 「override」, but does not override