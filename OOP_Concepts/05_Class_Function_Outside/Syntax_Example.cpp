#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Function Declarations inside the class
    void setDetails(int r, string n);
    void displayDetails();
};

// Function Definitions outside the class using :: operator

void Student::setDetails(int r, string n) {
    rollNo = r;
    name = n;
}

void Student::displayDetails() {
    cout << "Student Details:" << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Student s1;
    s1.setDetails(101, "John Doe");
    s1.displayDetails();

    return 0;
}
