#include <iostream>
using namespace std;

class Item {
    int code;
    float price;
public:
    void getData(int a, float b) {
        code = a;
        price = b;
    }
    void showData() {
        cout << "Code: " << code << "\nPrice: " << price << endl;
    }
};

int main() {
    Item *p = new Item; // Dynamic object creation
    Item d;             // Static object creation
    
    // Using pointer with arrow operator
    p->getData(101, 55.5);
    p->showData();

    // Pointing to existing object
    Item *p2 = &d;
    p2->getData(102, 99.9);
    p2->showData();

    delete p; // Don't forget to delete dynamic memory
    return 0;
}
