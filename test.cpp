#include <iostream>
#include <fstream>
using namespace std;


class NOTE {
protected:
    char str[8];   // 姓名
    int num;       // 電話
public:
    void showNote() {
        cout << "姓名：" << str << endl;
        cout << "電話：" << num << endl;
    }
};



int main() {
    NOTE myNOTE;
    int noteLength = sizeof(myNOTE);  // 每筆資料大小（固定長度）
    int n;

    ifstream fileInput("text2.txt", ios::binary | ios::in);  // 二進位開檔
    if (!fileInput.is_open()) {
        cout << "檔案開啟錯誤！" << endl;
        return 1;
    }

    cout << "請問要讀取第幾筆資料？";
    cin >> n;

    fileInput.seekg((n - 1) * noteLength, ios::beg);  // 計算第 n 筆位置並跳轉
    fileInput.read((char*)&myNOTE, noteLength);       // 讀取資料

    cout << "第 " << n << " 筆資料如下：" << endl;
    myNOTE.showNote();

    fileInput.close();
    return 0;
}
