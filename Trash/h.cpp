#include<iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class function\n";
    }
};

int main() {

    Derived d;

    // -------------------------------
    // Base class pointer to derived object
    // -------------------------------
    Base *bptr;
    bptr = &d;

    cout << "Using Base class pointer:\n";
    bptr->show();      // ✔ Allowed (Base function)
    // bptr->display(); // ❌ Not allowed (Derived function)

    // -------------------------------
    // Derived class pointer to derived object
    // -------------------------------
    Derived *dptr;
    dptr = &d;

    cout << "\nUsing Derived class pointer:\n";
    dptr->show();       // ✔ Allowed (Base function)
    dptr->display();    // ✔ Allowed (Derived function)

    return 0;
}
