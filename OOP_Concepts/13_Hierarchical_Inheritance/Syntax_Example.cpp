#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    void info() {
        cout << "I am a Shape." << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle." << endl;
    }
};

// Derived Class 2
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.info(); // Inherited from Shape
    c.draw();

    r.info(); // Inherited from Shape
    r.draw();

    return 0;
}
