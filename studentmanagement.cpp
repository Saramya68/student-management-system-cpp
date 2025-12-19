#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    float cgpa;
};

vector<Student> students;

// Add a student
void addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

// Display all students
void displayStudents() {
    if (students.empty()) {
        cout << "No student records available.\n";
        return;
    }

    for (auto &s : students) {
        cout << "ID: " << s.id
             << " Name: " << s.name
             << " CGPA: " << s.cgpa << endl;
    }
}

// Search student by ID
void searchStudent() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (auto &s : students) {
        if (s.id == id) {
            cout << "Student Found!\n";
            cout << "ID: " << s.id
                 << " Name: " << s.name
                 << " CGPA: " << s.cgpa << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

// Delete student by ID
void deleteStudent() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n----- Student Management System -----\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) addStudent();
        else if (choice == 2) displayStudents();
        else if (choice == 3) searchStudent();
        else if (choice == 4) deleteStudent();
        else if (choice == 5) break;
        else cout << "Invalid choice. Try again.\n";
    }

    return 0;
}
