#include <iostream>
using namespace std;

class Base {
    int x;
public:
    Base(int i) {
        x = i;
        cout << "Base Constructor called. x = " << x << endl;
    }
};

class Derived : public Base {
    int y;
public:
    // Calling Base constructor explicitly
    Derived(int i, int j) : Base(i) {
        y = j;
        cout << "Derived Constructor called. y = " << y << endl;
    }
};

int main() {
    Derived obj(10, 20);
    return 0;
}
