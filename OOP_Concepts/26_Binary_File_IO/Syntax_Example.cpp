#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];
    
    void getData() {
        cout << "Enter Roll: "; cin >> roll;
        cout << "Enter Name: "; cin >> name;
    }
    
    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.getData();
    
    // Write object to binary file
    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s1, sizeof(s1));
    outFile.close();
    
    cout << "Object saved to file." << endl;
    
    // Read object from binary file
    Student s2;
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();
    
    cout << "Object read from file:" << endl;
    s2.showData();

    return 0;
}
