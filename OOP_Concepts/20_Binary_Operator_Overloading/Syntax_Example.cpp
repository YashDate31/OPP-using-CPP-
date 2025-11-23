#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading binary plus (+) operator
    Complex operator+(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.6, 2.7);
    Complex c3;

    c3 = c1 + c2; // Equivalent to c1.operator+(c2)

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();

    return 0;
}
