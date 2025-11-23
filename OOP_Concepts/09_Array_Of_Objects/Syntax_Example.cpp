#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void setData() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee emp[3]; // Array of 3 Employee objects

    // Input loop
    for(int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        emp[i].setData();
    }

    cout << "\nEmployee Details:\n";
    // Output loop
    for(int i = 0; i < 3; i++) {
        emp[i].display();
    }

    return 0;
}
