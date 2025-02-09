#include <iostream>
using namespace std;

class Car {
public:
    Car() { cout << "Car object created!\n"; }   // ✅ 建構子
    ~Car() { cout << "Car object destroyed!\n"; } // ✅ 解構子
};

int main() {
    Car myCar;  // ✅ 物件建立，執行建構子
    cout << "Inside main()\n";
    return 0;   // ✅ 作用域結束，執行解構子
}
