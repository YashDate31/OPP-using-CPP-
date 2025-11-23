#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("test.txt", ios::out | ios::in | ios::trunc);
    
    file << "Hello World";
    
    // Get current position
    cout << "Current position: " << file.tellp() << endl; // 11
    
    // Move pointer to beginning
    file.seekg(0, ios::beg);
    
    char ch;
    cout << "Reading from beginning: ";
    while (file.get(ch)) {
        cout << ch;
    }
    cout << endl;
    
    // Move pointer 6 bytes from beginning
    file.seekg(6, ios::beg);
    file.get(ch);
    cout << "Character at position 6: " << ch << endl; // 'W'

    file.close();
    return 0;
}
