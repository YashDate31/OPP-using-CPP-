#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0; 
};

class Rectangle : public Shape {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    
    // Implementing the pure virtual function
    void area() {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r) : radius(r) {}
    
    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    
    Shape *sptr;
    
    Rectangle r(10, 5);
    Circle c(7);
    
    sptr = &r;
    sptr->area();
    
    sptr = &c;
    sptr->area();

    return 0;
}
