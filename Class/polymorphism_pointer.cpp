#include <iostream>
using namespace std;

// ✅ 抽象類別
class Animal {
public:
    virtual void makeSound() = 0;  // 純虛擬函式
};

// ✅ Dog 類別
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof!\n";
    }
};

// ✅ Cat 類別
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow!\n";
    }
};

int main() {
    Animal* a1 = new Dog();  // 🔹 抽象類別指標指向 Dog
    Animal* a2 = new Cat();  // 🔹 抽象類別指標指向 Cat

    a1->makeSound();  // Dog 叫
    a2->makeSound();  // Cat 叫

    delete a1;
    delete a2;
    
    return 0;
}
