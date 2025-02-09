#include <iostream>
using namespace std;

class Person {
private:  // 私有變數，外部無法存取
    int age;    
public:
    string name;
    void setAge(int a) {  // 設定 age
        if (a > 0) age = a;
    }
    int getAge() {  // 取得 age
        return age;
    }
};

int main() {
    Person p;
    p.name = "Alice";
    // p.age = 25; // ❌ 錯誤，age 是 private
    p.setAge(25);
    cout << p.name << " is " << p.getAge() << " years old.\n"; // Alice is 25 years old.
    return 0;
}

