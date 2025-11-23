#include <iostream>
using namespace std;

class Base {
public:
    int b;
    void show() {
        cout << "Base class show(). b = " << b << endl;
    }
};

class Derived : public Base {
public:
    int d;
    void show() {
        cout << "Derived class show(). b = " << b << ", d = " << d << endl;
    }
};

int main() {
    Base *bptr;
    Base baseObj;
    Derived derivedObj;

    // Pointing to base object
    bptr = &baseObj;
    bptr->b = 100;
    bptr->show(); // Calls Base::show()

    // Pointing to derived object
    bptr = &derivedObj;
    bptr->b = 200;
    // bptr->d = 300; // Error: Cannot access derived class member
    
    // Calls Base::show() because the pointer is of type Base* (Early Binding)
    // To call Derived::show(), we need Virtual Functions.
    bptr->show(); 

    // Casting to access derived members
    ((Derived *)bptr)->d = 300;
    ((Derived *)bptr)->show();

    return 0;
}
