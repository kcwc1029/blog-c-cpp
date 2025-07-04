#include <iostream>
using namespace std;

// 基礎類別 vehicle
class vehicle {
public:
    void start() {
        cout << "運輸工具啟動" << endl;
    }
    void shutdown() {
        cout << "運輸工具熄火" << endl;
    }
};

// 使用虛擬繼承：virtual public vehicle
class aircraft : virtual public vehicle {
public:
    void fly() {
        cout << "飛行器飛行" << endl;
    }
    void land() {
        cout << "飛行器著陸" << endl;
    }
};

// 使用虛擬繼承：virtual public vehicle
class car : virtual public vehicle {
public:
    void go() {
        cout << "汽車啟動" << endl;
    }
    void stop() {
        cout << "汽車熄火" << endl;
    }
};

// 同時繼承 aircraft 與 car
class aircar : public aircraft, public car {
    // 不需要額外定義，直接繼承所有成員
};

int main() {
    aircar ac;

    // 呼叫 vehicle 類別的成員
    ac.start();

    // 呼叫 car 類別成員
    ac.go();

    // 呼叫 aircraft 類別成員
    ac.fly();
    ac.land();

    // 呼叫 car 類別成員
    ac.stop();

    // 呼叫 vehicle 類別的成員
    ac.shutdown();

    return 0;
}
