#include <iostream>
using namespace std;

// ✅ 定義類別模板
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v){
        value = v;
    }
    // Box(T v) : value(v) {}  // ✅ 建構函式

    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(100);   // `T = int`
    Box<double> doubleBox(3.14);  // `T = double`
    Box<string> stringBox("Hello Templates");  // `T = string`

    intBox.show();
    doubleBox.show();
    stringBox.show();
    
    return 0;
}
