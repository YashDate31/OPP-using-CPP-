#include <iostream>
using namespace std;

// Base class for Area
class Area {
public:
    float area(float length, float breadth) {
        return length * breadth;
    }
};

// Base class for Perimeter
class Perimeter {
public:
    float perimeter(float length, float breadth) {
        return 2 * (length + breadth);
    }
};

// Derived class
class Rectangle : public Area, public Perimeter {
private:
    float length, breadth;
public:
    void get_data() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area(length, breadth) << endl;
        cout << "Perimeter: " << perimeter(length, breadth) << endl;
    }
};

int main() {
    Rectangle rect;
    rect.get_data();
    rect.display();
    return 0;
}
