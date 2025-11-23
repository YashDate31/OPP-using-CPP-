#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << endl;
        outFile << "This is a file handling example." << endl;
        outFile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Reading from a file
    string line;
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        cout << "\nReading from file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
