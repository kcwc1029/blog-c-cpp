#include <iostream>
using namespace std;

// ✅ 父類別（Base Class）
class Crop {
public:
    string name;
    // 父類別的建構子
    Crop(string name) : name(name) {  
        cout << "Crop constructor: " << name << " is planted.\n";
    }
    // 父類別的方法
    void grow() {
        cout << name << " is growing.\n";
    }
};

// ✅ 子類別（Derived Class）
class Rice : public Crop { // 稻子繼承農作物
public:
    // 使用初始化列表來呼叫父類別的建構子
    Rice(string name) : Crop(name) {  
        cout << "Rice constructor: " << name << " is a special kind of crop.\n";
    }

    // 子類別自己的方法
    void harvest() {
        cout << name << " is being harvested!\n";
    }
};

int main() {
    // 創建 Rice 物件
    Rice myRice("Golden Rice");
    myRice.grow();    // ✅ 繼承自 Crop（農作物通用行為）
    myRice.harvest(); // ✅ Rice 自己的專屬行為（收割）
    return 0;
}

// Crop constructor: Golden Rice is planted.
// Rice constructor: Golden Rice is a special kind of crop.
// Golden Rice is growing.
// Golden Rice is being harvested!