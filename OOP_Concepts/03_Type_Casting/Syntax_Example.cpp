#include <iostream>
using namespace std;

int main() {
    // 1. Implicit Casting
    int num = 10;
    double d = num; // int automatically converted to double
    cout << "Implicit (int to double): " << d << endl;

    // 2. Explicit Casting (C-Style)
    double pi = 3.14159;
    int intPi = (int)pi; // Explicitly convert double to int
    cout << "C-Style Cast (double to int): " << intPi << endl;

    // 3. static_cast (C++ Style)
    float f = 45.67;
    int i = static_cast<int>(f);
    cout << "static_cast (float to int): " << i << endl;

    // ASCII conversion example
    char c = 'A';
    int ascii = static_cast<int>(c);
    cout << "ASCII value of " << c << " is " << ascii << endl;

    return 0;
}
