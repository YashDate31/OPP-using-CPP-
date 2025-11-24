
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
    Employee *ptr,E;   // base class pointer
    Programmer p;
    Manager m;

    ptr = &E;
    ptr->getEmployee();

    // Input

    ptr = &m;
    ptr->getData();