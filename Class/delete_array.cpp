class StudentGroup {
private:
    int* scores;
public:
    StudentGroup(int size) {
        scores = new int[size];  // ✅ 配置動態陣列
        cout << "Student group created!\n";
    }
    
    ~StudentGroup() {
        cout << "Student group destroyed!\n";
        delete[] scores;  // ✅ 釋放動態陣列
    }
};

int main() {
    StudentGroup group(5);  // ✅ 建立 StudentGroup 物件
    return 0;  // ✅ 離開作用域時，解構子會釋放記憶體
}
    