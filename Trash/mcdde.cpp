#include <iostream>
#include <string>
#include <iomanip> // for formatting
using namespace std;

#define MAX 50

// ---------- Base Class ----------
class Assignment {
public:
    int id;
    string subject;
    string name;
    string deadline;
    string status;
};

// ---------- Independent Functions ----------

// 1. Search assignments by subject
void searchBySubject(Assignment arr[], int total) {
    string key;
    cout << "\nEnter subject to search: ";
    cin.ignore();
    getline(cin, key);
    bool found = false;
    for(int i = 0; i < total; i++) {
        if(arr[i].subject == key) {
            cout << "\nID: " << arr[i].id
                 << " | Name: " << arr[i].name
                 << " | Deadline: " << arr[i].deadline
                 << " | Status: " << arr[i].status;
            found = true;
        }
    }
    if(!found) cout << "\nNo assignments found for this subject!";
}

// 2. Count completed and pending assignments
void countStatus(Assignment arr[], int total) {
    int completed = 0, pending = 0;
    for(int i = 0; i < total; i++) {
        if(arr[i].status == "Completed")
            completed++;
        else if(arr[i].status == "Pending")
            pending++;
    }
    cout << "\nCompleted: " << completed << " | Pending: " << pending;
}

// 3. Delete assignment by ID
int deleteByID(Assignment arr[], int total) {
    int id;
    cout << "\nEnter Assignment ID to delete: ";
    cin >> id;
    for(int i = 0; i < total; i++) {
        if(arr[i].id == id) {
            for(int j = i; j < total - 1; j++)
                arr[j] = arr[j + 1]; // shift elements
            cout << "\nAssignment deleted successfully!";
            return total - 1;
        }
    }
    cout << "\nAssignment not found!";
    return total;
}

// 4. Sort assignments by deadline (lexicographical DD/MM)
void sortByDeadline(Assignment arr[], int total) {
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - i - 1; j++) {
            if(arr[j].deadline > arr[j + 1].deadline)
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << "\nAssignments sorted by deadline!";
}

// 5. Display only pending assignments
void displayPending(Assignment arr[], int total) {
    bool found = false;
    for(int i = 0; i < total; i++) {
        if(arr[i].status == "Pending") {
            cout << "\nID: " << arr[i].id
                 << " | Subject: " << arr[i].subject
                 << " | Name: " << arr[i].name
                 << " | Deadline: " << arr[i].deadline;
            found = true;
        }
    }
    if(!found) cout << "\nNo pending assignments!";
}

// ---------- Main Function ----------
int main() {
    Assignment assignments[MAX];
    int total = 0;
    int choice;
    char temp;

    do {
        cout << "\n===== ASSIGNMENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Assignment";
        cout << "\n2. Display All Assignments";
        cout << "\n3. Update Status";
        cout << "\n4. Search by Subject";
        cout << "\n5. Count Completed/Pending";
        cout << "\n6. Delete Assignment";
        cout << "\n7. Sort by Deadline";
        cout << "\n8. Display Pending Assignments";
        cout << "\n9. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(total < MAX) {
                    cout << "\nEnter Assignment ID: ";
                    cin >> assignments[total].id;
                    cin.ignore();
                    cout << "Enter Subject Name: ";
                    getline(cin, assignments[total].subject);
                    cout << "Enter Assignment Name: ";
                    getline(cin, assignments[total].name);
                    cout << "Enter Deadline (DD/MM): ";
                    getline(cin, assignments[total].deadline);
                    cout << "Enter Status (Pending/Completed): ";
                    getline(cin, assignments[total].status);
                    total++;
                    cout << "\nAssignment added!";
                } else {
                    cout << "\nStorage full!";
                }
                break;

            case 2:
                for(int i = 0; i < total; i++) {
                    cout << "\n-------------------------------------";
                    cout << "\nID: " << assignments[i].id;
                    cout << "\nSubject: " << assignments[i].subject;
                    cout << "\nName: " << assignments[i].name;
                    cout << "\nDeadline: " << assignments[i].deadline;
                    cout << "\nStatus: " << assignments[i].status;
                    cout << "\n-------------------------------------";
                }
                break;

            case 3: {
                int id;
                bool found = false;
                cout << "\nEnter Assignment ID to update: ";
                cin >> id;
                cin.ignore();
                for(int i = 0; i < total; i++) {
                    if(assignments[i].id == id) {
                        cout << "Enter new status: ";
                        getline(cin, assignments[i].status);
                        cout << "\nStatus updated!";
                        found = true;
                        break;
                    }
                }
                if(!found) cout << "\nAssignment not found!";
                break;
            }

            case 4: searchBySubject(assignments, total); break;
            case 5: countStatus(assignments, total); break;
            case 6: total = deleteByID(assignments, total); break;
            case 7: sortByDeadline(assignments, total); break;
            case 8: displayPending(assignments, total); break;
            case 9: cout << "\nExiting..."; break;
            default: cout << "\nInvalid choice!";
        }

        if(choice != 9) {
            cout << "\nDo you want to continue? (y/n): ";
            cin >> temp;
        } else {
            temp = 'n';
        }

    } while(temp == 'y' || temp == 'Y');

    return 0;
}
