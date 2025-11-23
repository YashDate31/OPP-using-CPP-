#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    
    // Open source file
    ifstream source("source.txt");
    if (!source) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    // Open destination file
    ofstream dest("destination.txt");
    if (!dest) {
        cout << "Error opening destination file!" << endl;
        source.close();
        return 1;
    }

    // Copy loop
    while (source.get(ch)) {
        dest.put(ch);
    }

    cout << "File copied successfully." << endl;

    // Close files
    source.close();
    dest.close();

    return 0;
}
