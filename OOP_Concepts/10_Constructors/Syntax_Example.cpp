#include <iostream>
using namespace std;

class Box {
    public:
        int length;

        // 1. Default Constructor
        Box() {
            length = 0;
            cout << "Default Constructor Called" << endl;
        }

        // 2. Parameterized Constructor
        Box(int l) {
            length = l;
            cout << "Parameterized Constructor Called" << endl;
        }

        // 3. Copy Constructor
        Box(const Box &obj) {
            length = obj.length;
            cout << "Copy Constructor Called" << endl;
        }
};

int main() {
    Box b1;         // Calls Default Constructor
    Box b2(10);     // Calls Parameterized Constructor
    Box b3(b2);     // Calls Copy Constructor

    return 0;
}
