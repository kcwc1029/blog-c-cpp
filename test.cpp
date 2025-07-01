#include <iostream>
using namespace std;

class Student {
private:
    int Score_T;
public:
    Student(int s) {
        Score_T = s;
    }
    friend class Teacher;  // ✅ 宣告整個 Teacher 類別是朋友
};

class Teacher {
public:
    void show_score(Student s) {
        cout << "學生分數是：" << s.Score_T << endl;  // ❌ 錯誤！Score_T 是 private
    }
};

int main() {
    Student s1(80);
    Teacher t;
    t.show_score(s1);
    return 0;
}

// .\test.cpp: 在 「void Teacher::show_score(Student)」 成員函式中:
// .\test.cpp:16:37: 錯誤：「int Student::Score_T」 is private within this contex
