#include <iostream>
using namespace std;
class Animal {
    public:
        void makeSound() {  // ❌ 沒有 `virtual`
            cout << "Animal makes a sound.\n";
        }
    };
    
    class Dog : public Animal {
    public:
        void makeSound() {  // ❌ 這不是「覆寫」，是「隱藏」
            cout << "Dog barks: Woof!\n";
        }
    };
    
    int main() {
        Animal* ptr = new Dog();
        ptr->makeSound();  // ❌ 仍然執行 `Animal::makeSound()`，而非 `Dog::makeSound()`
        delete ptr;
        return 0;
    }
    