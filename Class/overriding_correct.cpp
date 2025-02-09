
#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound() {  // ✅ `virtual` 允許覆寫
            cout << "Animal makes a sound.\n";
        }
    };
    
    class Dog : public Animal {
    public:
        void makeSound() override {  // ✅ 確保覆寫成功
            cout << "Dog barks: Woof!\n";
        }
    };
    
    int main() {
        Animal* ptr = new Dog();
        ptr->makeSound();  // ✅ 這次會執行 `Dog` 的 makeSound()
        delete ptr;
        return 0;
    }
    