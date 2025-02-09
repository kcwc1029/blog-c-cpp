#include <iostream>
using namespace std;

class Animal {
public:
    Animal() { cout << "Animal created!\n"; }
    virtual ~Animal() { cout << "Animal destroyed!\n"; }  // ✅ `virtual` 確保正確釋放
};

class Dog : public Animal {
public:
    Dog() { cout << "Dog created!\n"; }
    ~Dog() { cout << "Dog destroyed!\n"; }
};

int main() {
    Animal* myDog = new Dog();  // ✅ `Animal*` 指向 `Dog`
    delete myDog;  // ✅ 確保 `Dog` 和 `Animal` 都被正確銷毀
    return 0;
}

// Animal created!
// Dog created!
// Dog destroyed!
// Animal destroyed