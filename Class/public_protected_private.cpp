#include <iostream>
using namespace std;

class Parent {
public:
    int a = 10;
protected:
    int b = 20;
private:
    int c = 30;
};

class Child : public Parent {
public:
    void show() {
        cout << "a = " << a << endl;  // ✅ 可存取（public）
        cout << "b = " << b << endl;  // ✅ 可存取（protected）
        // cout << "c = " << c << endl; // ❌ 錯誤，private 無法存取
    }
};

int main() {
    Child obj;
    obj.show();
    cout << "a = " << obj.a << endl;  // ✅ 可存取（public）
    // cout << "b = " << obj.b << endl; // ❌ 錯誤，protected 無法在類別外存取
    return 0;
}

