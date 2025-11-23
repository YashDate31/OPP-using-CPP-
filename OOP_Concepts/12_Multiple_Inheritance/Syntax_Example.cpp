#include <iostream>
using namespace std;

class ClassA {
public:
    void displayA() {
        cout << "This is Class A" << endl;
    }
};

class ClassB {
public:
    void displayB() {
        cout << "This is Class B" << endl;
    }
};

// Derived class inherits from both ClassA and ClassB
class Derived : public ClassA, public ClassB {
public:
    void show() {
        cout << "This is Derived Class" << endl;
    }
};

int main() {
    Derived obj;
    obj.displayA(); // From ClassA
    obj.displayB(); // From ClassB
    obj.show();     // From Derived

    return 0;
}
