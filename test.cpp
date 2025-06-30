#include <iostream>
#include <string>
#include <algorithm>  // sort 需要這個標頭
using namespace std;

int main() {
    string zodiac[12];{"rat", "ox", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    

    // 輸入 12 個生肖名稱
    cout << "請輸入十二生肖（每次一個）:\n";
    for (int i = 0; i < 12; i++) {
        cout << "第 " << (i + 1) << " 個生肖：";
        cin >> zodiac[i];
    }

    // 排序
    sort(zodiac, zodiac + 12);

    // 輸出結果
    cout << "\n🔠 排序後的生肖順序：\n";
    for (const string& s : zodiac) {
        cout << s << endl;
    }

    return 0;
}
