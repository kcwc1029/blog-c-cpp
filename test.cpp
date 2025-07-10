#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int sum = 0, score;
        for (int i = 0; i < n; i++) {
            cin >> score;
            sum += score;
        }
        double avg = sum * 1.0 / n; // 避免整數除法
        if (avg > 59)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
