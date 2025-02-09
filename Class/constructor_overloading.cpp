#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // ✅ 預設建構子（沒有參數）
    Car() {
        brand = "Unknown";
        speed = 0;
        cout << "Car created with default values.\n";
    }

    // ✅ 帶參數的建構子
    Car(string b, int s) {
        brand = b;
        speed = s;
        cout << "Car object created: " << brand << ", Speed: " << speed << " km/h\n";
    }
};
    
int main() {
    Car car1;  // 會呼叫 `Car()`
    Car car2("BMW", 180);  // 會呼叫 `Car(string, int)`
    return 0;
}

// Car created with default values.
// Car object created: BMW, Speed: 180 km/h