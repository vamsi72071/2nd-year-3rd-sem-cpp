#include <iostream>
using namespace std;
class Complex {
private:
    int real, imag;
public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    // Friend function declarations
    friend Complex operator-(Complex c);            
    friend Complex operator+(Complex c1, Complex c2); 
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex operator-(Complex c) {
    return Complex(-c.real, -c.imag);
}
Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    Complex c1(5, 3), c2(2, 4);
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    Complex c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();
    Complex c4 = -c1;
    cout << "-c1 = ";
    c4.display();
    return 0;
}
