#include <iostream>
using namespace std;

template<typename T=int>
class Number{
private:
    T value;
public:
    Number(T v): value(v) {}
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number<> num1(42);  // ✅ 預設 `T = int`
    Number<double> num2(3.14);  // ✅ 手動指定 `T = double`

    num1.show();
    num2.show();
    return 0;
}

// Value: 42
// Value: 3.14