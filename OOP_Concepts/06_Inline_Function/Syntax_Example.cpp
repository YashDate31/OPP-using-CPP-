#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

class MathOp {
public:
    // Implicitly inline because it's defined inside the class
    int cube(int x) {
        return x * x * x;
    }
};

int main() {
    int num = 5;

    // The compiler replaces this call with "num * num"
    cout << "Square of " << num << " is: " << square(num) << endl;

    MathOp m;
    cout << "Cube of " << num << " is: " << m.cube(num) << endl;

    return 0;
}
