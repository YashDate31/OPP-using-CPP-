#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // virtual = runtime polymorphism
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {   // overriding
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal *ptr;     // base class pointer
    Dog d;           // derived class object

    ptr = &d;        // pointing to derived object

    ptr->sound();    // OUTPUT: Dog barks  (runtime polymorphism)
}
