#include <iostream>
using namespace std;

// ✅ 抽象類別
class Animal {
public:
    virtual void makeSound() = 0;  // 純虛擬函式
};

class Dog : public Animal {
public:
    void makeSound() override {  // ✅ 必須覆寫
        cout << "Dog barks: Woof!\n";
    }
};

int main() {
    // Animal a;  // ❌ 錯誤，無法建立抽象類別的物件
    Dog d;
    d.makeSound();
    return 0;
}
