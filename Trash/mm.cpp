#include<iostream>
using namespace std;

// Base Class
class Employee {
public:
    int empid;
    string empcode;

    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Employee Code: ";
        cin >> empcode;
    }

    // Virtual function
    virtual void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Code: " << empcode << endl;
    }
};

// Derived Class : Programmer
class Programmer : public Employee {
public:
    string skill;

    void getData() {
        cout << "\n--- Enter Programmer Details ---\n";
        getEmployee();
        cout << "Enter Skill: ";
        cin >> skill;
    }

    void display() override {
        cout << "\n--- Programmer Details ---\n";
        Employee::display();
        cout << "Skill: " << skill << endl;
    }
};

// Derived Class : Manager
class Manager : public Employee {
public:
    string department;

    void getData() {
        cout << "\n--- Enter Manager Details ---\n";
        getEmployee();
        cout << "Enter Department: ";
        cin >> department;
    }

    void display() override {
        cout << "\n--- Manager Details ---\n";
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee *ptr;   // base class pointer
    Programmer p;
    Manager m;

    // Take Programmer input
    p.getData();

    // Take Manager input
    m.getData();

    // Display Programmer (runtime polymorphism)
    ptr = &p;
    ptr->display();

    // Display Manager (runtime polymorphism)
    ptr = &m;
    ptr->display();

    return 0;
}
