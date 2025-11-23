#include <iostream>
#include <string>
using namespace std;

// Base Class
class Course {
protected:
    string courseName;
    string courseCode;

public:
    void getCourse() {
        cout << "Enter Course Name: ";
        cin >> courseName;
        cout << "Enter Course Code: ";
        cin >> courseCode;
    }

    void showCourse() {
        cout << "\nCourse Name: " << courseName;
        cout << "\nCourse Code: " << courseCode;
    }
};

// Derived Class
class Assignment : public Course {
    string title;
    string dueDate;
    int marks;

public:
    void getAssignment() {
        getCourse();
        cout << "Enter Assignment Title: ";
        cin >> title;
        cout << "Enter Due Date (DD/MM/YYYY): ";
        cin >> dueDate;
        cout << "Enter Marks Obtained (out of 100): ";
        cin >> marks;
    }

    void showAssignment() {
        showCourse();
        cout << "\nAssignment Title: " << title;
        cout << "\nDue Date: " << dueDate;
        cout << "\nMarks Obtained: " << marks << "/100" << endl;
    }

    int getMarks() {
        return marks;
    }
};

// Main Function
int main() {
    Assignment a[10];
    int count = 0, choice;

    do {
        cout << "\n===== Course and Assignment Management System =====";
        cout << "\n1. Add Assignment";
        cout << "\n2. View All Assignments";
        cout << "\n3. Calculate Total and Average Marks";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 10) {
                a[count].getAssignment();
                count++;
                cout << "\nAssignment Added Successfully!\n";
            } else {
                cout << "\nStorage Full! Cannot Add More.\n";
            }
            break;

        case 2:
            if (count == 0)
                cout << "\nNo Assignments Added Yet.\n";
            else {
                cout << "\n=== Assignment List ===\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nAssignment " << i + 1 << ":";
                    a[i].showAssignment();
                    cout << "----------------------\n";
                }
            }
            break;

        case 3:
            if (count == 0)
                cout << "\nNo Marks to Calculate.\n";
            else {
                int total = 0;
                for (int i = 0; i < count; i++) {
                    total += a[i].getMarks();
                }
                float avg = (float)total / count;
                cout << "\nTotal Marks of All Assignments: " << total;
                cout << "\nAverage Marks: " << avg << endl;
            }
            break;

        case 4:
            cout << "\nExiting... Thank You!\n";
            break;

        default:
            cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
