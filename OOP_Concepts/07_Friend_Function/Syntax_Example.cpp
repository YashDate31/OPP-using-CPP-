#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box box);
};

// Friend function definition
// Note: It is NOT a member function, so no Box:: scope resolution
void printWidth(Box box) {
    // Accessing private member 'width' directly
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box b(10.5);
    
    // Calling friend function
    printWidth(b);

    return 0;
}
