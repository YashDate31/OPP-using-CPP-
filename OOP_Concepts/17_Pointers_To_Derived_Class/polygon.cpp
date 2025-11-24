#include <iostream>
using namespace std;

// Base Class
class Polygon {
public:
    float width, height;

    void getData() {
        cout << "Enter width and height: ";
        cin >> width >> height;
    }
};

// Derived class Rectangle
class Rectangle : public Polygon {
public:
    float area() {
        return width * height;
    }
};

// Derived class Triangle
class Triangle : public Polygon {
public:
    float area() {
        return 0.5 * width * height;
    }
};

int main() {
    // Pointer to base class
    Polygon *ptr;

    // Rectangle object
    Rectangle r;
    ptr = &r;      // base pointer to derived object
    cout << "\n--- Rectangle ---\n";
    ptr->getData();
    cout << "Area of Rectangle = " << ptr->area() << endl;

    // Triangle object
    Triangle t;
    ptr = &t;      // base pointer to derived object
    cout << "\n--- Triangle ---\n";
    ptr->getData();
    cout << "Area of Triangle  = " << ptr->area() << endl;

    return 0;
}
