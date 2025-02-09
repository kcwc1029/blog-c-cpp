class Car {
public:
    Car() { cout << "Car object created!\n"; }
    ~Car() { cout << "Car object destroyed!\n"; }
};

int main() {
    Car* myCar = new Car();  // ✅ `new` 建立物件
    delete myCar;  // ✅ 手動刪除，觸發解構子
    
    return 0;
}
    