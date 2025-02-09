#include <iostream>
using namespace std;

class A {
public:
    int value;
    A() { value = 10; }
};

class B : public A {};  // B 繼承 A
class C : public A {};  // C 繼承 A

class D : public B, public C {};  // D 同時繼承 B 和 C

int main() {
    D obj;
    // ❌ 這裡會產生編譯錯誤：二義性（Ambiguity）
    cout << obj.value << endl;  // ❌ 不知道是 B::A 還是 C::A 的 value

    return 0;
}
