#include <iostream>
using namespace std;

class Calculator {
    public:
        // 1. Two integer arguments
        int add(int a, int b) {
            return a + b;
        }

        // 2. Three integer arguments
        int add(int a, int b, int c) {
            return a + b + c;
        }

        // 3. Two double arguments
        double add(double a, double b) {
            return a + b;
        }
};

int main() {
    Calculator calc;
    cout << "Int Add (2 args): " << calc.add(10, 20) << endl;
    cout << "Int Add (3 args): " << calc.add(10, 20, 30) << endl;
    cout << "Double Add: " << calc.add(10.5, 20.5) << endl;
    return 0;
}
