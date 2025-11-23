#include <iostream>
#include <iomanip> // Required for manipulators
using namespace std;

int x = 100; // Global variable

int main() {
    int x = 10; // Local variable

    // 1. Scope Resolution Operator
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // Accessing global x

    // 2. Dynamic Memory Allocation
    int* ptr = new int; // Allocate memory for one integer
    *ptr = 50;
    cout << "Value in dynamic memory: " << *ptr << endl;
    delete ptr; // Free memory

    int* arr = new int[5]; // Allocate array
    delete[] arr; // Free array

    // 3. Manipulators
    cout << "Formatted Output:" << endl;
    cout << setw(10) << "Name" << setw(10) << "Marks" << endl;
    cout << setw(10) << "Alice" << setw(10) << 95 << endl;
    
    return 0;
}
