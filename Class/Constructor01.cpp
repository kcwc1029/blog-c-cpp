#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // NOTE: 建構子（與類別名稱相同，無回傳值）
    Car(string b, int s) {
        brand = b;
        speed = s;
        cout << "Car object created: " << brand << ", Speed: " << speed << " km/h\n";
    }
};

int main() {
    Car car1("Toyota", 120);
    Car car2("Tesla", 200);    
    return 0;
}
