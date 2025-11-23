#include <iostream>
using namespace std;

// Base Class
class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
};

// Derived Class (Single Inheritance)
class Dog : public Animal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
};

// Derived Class (Multilevel Inheritance)
class BabyDog : public Dog {
    public:
        void weep() {
            cout << "Weeping..." << endl;
        }
};

int main() {
    BabyDog d1;
    d1.eat();   // Inherited from Animal
    d1.bark();  // Inherited from Dog
    d1.weep();  // Own method
    return 0;
}
