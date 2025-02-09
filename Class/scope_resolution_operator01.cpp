#include <iostream>
using namespace std;

class Car {
public:
    void drive();  // 只宣告，不定義
};

// ✅ 在類別外定義函式
void Car::drive() {
    cout << "Car is driving!" << endl;
}

int main(){
    Car car01;
    car01.drive(); // Car is driving!
    return 0;
}

