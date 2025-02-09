class Student {
private:
    string* name;
public:
    Student(string n) {
        name = new string(n);  // ✅ 配置動態記憶體
        cout << "Student " << *name << " created!\n";
    }
    
    ~Student() {
        cout << "Student " << *name << " destroyed!\n";
        delete name;  // ✅ 釋放動態記憶體
    }
};

int main() {
    Student s1("Alice");  // ✅ 建構
    Student s2("Bob");
    return 0;  // ✅ `s1` 和 `s2` 離開作用域時，執行解構子
}
    