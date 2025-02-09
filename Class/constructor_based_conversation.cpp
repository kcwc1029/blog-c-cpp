#include <iostream>
using namespace std;

class Person {
public:
    string name;

    // ✅ 單參數建構函式
    Person(string n) {
        name = n;
    }

    void introduce() {
        cout << "Hi, my name is " << name << "!\n";
    }
};

int main() {
    Person p1("Alice"); // 一般建立物件方式
    Person p2 = "Bob";  // ✅ 這裡會自動轉換 "Bob" 成 Person("Bob")
    p1.introduce();
    p2.introduce();
    return 0;
}
