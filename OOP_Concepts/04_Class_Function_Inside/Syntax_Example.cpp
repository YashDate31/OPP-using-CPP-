#include <iostream>
using namespace std;

// Class Definition
class Student {
    // Access Specifier
    private:
        int rollNo;      // Data Member
        string name;     // Data Member

    public:
        // Member Function Defined INSIDE Class
        void setDetails(int r, string n) {
            rollNo = r;
            name = n;
        }

        // Member Function Defined INSIDE Class
        void display() {
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }
};

int main() {
    // Object Creation
    Student s1;
    
    // Accessing Member Functions
    s1.setDetails(101, "Yash");
    s1.display();
    
    return 0;
}
