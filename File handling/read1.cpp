#include <iostream>
using namespace std;

class Assignment {
public:
    char title[30];
    char dueDate[15];
    int completed; // 0 = not done, 1 = done

    void addAssignment() {
        cout << "Enter Assignment Title: ";
        cin >> title;
        cout << "Enter Due Date (DD/MM): ";
        cin >> dueDate;
        completed = 0;
        cout << "Assignment added successfully!\n\n";
    }

    void showAssignment(int i) {
        cout << i + 1 << ". " << title << " (Due: " << dueDate << ")";
        if (completed == 1)
            cout << " [Completed]";
        cout << endl;
    }

    void markComplete() {
        completed = 1;
        cout << "Assignment marked as completed!\n\n";
    }
};

int main() {
    Assignment assignments[10];
    int total = 0;
    int choice;

    cout << "=== Simple Assignment Tracker ===\n\n";

    do {
        cout << "1. Add Assignment\n";
        cout << "2. View Assignments\n";
        cout << "3. Mark Assignment Complete\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // <-- Clears leftover newline to prevent infinite loop

        switch (choice) {
        case 1:
            if (total < 10) {
                assignments[total].addAssignment();
                total++;
            } else {
                cout << "Cannot add more assignments!\n\n";
            }
            break;
        case 2:
            if (total == 0) {
                cout << "No assignments yet!\n\n";
            } else {
                cout << "\nAssignments List:\n";
                for (int i = 0; i < total; i++) {
                    assignments[i].showAssignment(i);
                }
                cout << endl;
            }
            break;
        case 3:
            if (total == 0) {
                cout << "No assignments to mark!\n\n";
            } else {
                int num;
                cout << "Enter assignment number to mark complete: ";
                cin >> num;
                cin.ignore(); // <-- Clears leftover newline
                if (num > 0 && num <= total) {
                    assignments[num - 1].markComplete();
                } else {
                    cout << "Invalid number!\n\n";
                }
            }
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n\n";
        }

    } while (choice != 4);

    return 0;
}
