#include <iostream>
using namespace std;

namespace A {
    int value = 10;
}

namespace B {
    int value = 20;
}

int main() {
    cout << "A::value = " << A::value << endl;
    cout << "B::value = " << B::value << endl;
    return 0;
}
    