#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream fin("theory.md");
    char ch;

    if (!fin) {
        cout << "File not found!";
        return 0;
    }

    cout << "File Content:\n";

    while (!fin.eof()) {     // check EOF
        fin.get(ch);
        cout << ch;
    }

    fin.close();
    return 0;
}
