#include <iostream>
using namespace std;

int main() {
    // 1. Variable Declaration
    int a, b;
    
    // 2. Output (cout)
    cout << "Enter two numbers: "; 
    
    // 3. Input (cin)
    cin >> a >> b; 
    
    // 4. Expression Evaluation
    int sum = a + b;
    int product = a * b;
    
    // 5. Cascading Output
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    
    return 0;
}
