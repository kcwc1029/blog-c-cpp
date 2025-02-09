class Complex {
    public:
        double real, imag;
        
        Complex(double r, double i) : real(r), imag(i) {}
    
        // ✅ 重載 `+` 運算子（靜態綁定）
        Complex operator+(const Complex &b) {
            return Complex(real + b.real, imag + b.imag);
        }
    
        void display() {
            cout << real << " + " << imag << "i\n";
        }
    };
    
    int main() {
        Complex c1(2.0, 3.0), c2(1.5, 2.5);
        Complex c3 = c1 + c2;  // ✅ 透過 `operator+` 進行運算
        c3.display();  // 3.5 + 5.5i
        return 0;
    }
    