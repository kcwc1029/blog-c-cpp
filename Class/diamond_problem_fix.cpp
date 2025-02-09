#include <iostream>
using namespace std;

class A {
public:
    int value;
    A() { value = 10; }
};

class B : virtual public A {};  // 🔹 加上 virtual
class C : virtual public A {};  // 🔹 加上 virtual

class D : public B, public C {};  // D 繼承 B 和 C

int main() {
    D obj;
    cout << obj.value << endl;  // ✅ 現在只有一份 A::value，不會模糊

    return 0;
}
