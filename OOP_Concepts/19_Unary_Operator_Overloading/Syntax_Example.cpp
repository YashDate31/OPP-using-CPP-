#include <iostream>
using namespace std;

class Space {
    int x, y, z;
public:
    void getdata(int a, int b, int c) {
        x = a; y = b; z = c;
    }
    void display() {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
    }
    
    // Overloading unary minus (-) operator
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Space s;
    s.getdata(10, -20, 30);
    
    cout << "Before overloading: ";
    s.display();

    -s; // Activates operator-() function

    cout << "After overloading: ";
    s.display();

    return 0;
}
