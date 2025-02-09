#include <iostream>
using namespace std;

class Math {
public:
    // ✅ 同名函式，不同參數類型
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math obj;
    cout << obj.add(5, 3) << endl;      // 8
    cout << obj.add(2.5, 1.5) << endl;  // 4.0
    return 0;
}
