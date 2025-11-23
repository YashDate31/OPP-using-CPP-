#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static data member

public:
    Counter() {
        count++; // Increment count whenever an object is created
    }

    // Static member function
    static void showCount() {
        cout << "Current Object Count: " << count << endl;
    }
};

// Initialize static member outside the class
int Counter::count = 0;

int main() {
    Counter::showCount(); // 0

    Counter c1;
    Counter::showCount(); // 1

    Counter c2;
    Counter::showCount(); // 2

    Counter c3;
    c3.showCount(); // Can also be called using object, but Class:: is preferred

    return 0;
}
