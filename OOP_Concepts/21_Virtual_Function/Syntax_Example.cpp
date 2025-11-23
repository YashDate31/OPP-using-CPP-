#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display Base" << endl;
    }
    void show() {
        cout << "Show Base" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the virtual function
    void display() {
        cout << "Display Derived" << endl;
    }
    // Hiding the non-virtual function
    void show() {
        cout << "Show Derived" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;

    // Virtual function, binded at runtime (Late Binding)
    bptr->display(); // Calls Derived::display()

    // Non-virtual function, binded at compile time (Early Binding)
    bptr->show();    // Calls Base::show()

    return 0;
}
