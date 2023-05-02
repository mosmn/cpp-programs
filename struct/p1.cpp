#include <iostream>
#include <string>
#define MAX_STUDENTS 5
#define MAX_COURSES 2

using namespace std;

struct Student {
    int id;
    string name;
    string nickname;
};

struct Course {
    string code;
    string name;
    string lecturer;
};

void dispalyMenu();
void addNewStudent(Student students[], int& numStudents);
void displayStudentList(Student students[], int numStudents);
void addNewCourse(Course courses[], int& numCourses);
void displayCourseList(Course courses[], int numCourses);

int main() {
    Student sObject[MAX_STUDENTS];
    Course cObject[MAX_COURSES];
    int numStudents = 0;
    int numCourses = 0;

    while (true) {
        dispalyMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addNewStudent(sObject, numStudents);
                break;
            case 2:
                displayStudentList(sObject, numStudents);
                break;
            case 3:
                addNewCourse(cObject, numCourses);
                break;
            case 4:
                displayCourseList(cObject, numCourses);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
}

void dispalyMenu() {
    cout << "Menu:" << endl;
    cout << "1. Add new student" << endl;
    cout << "2. Display student list" << endl;
    cout << "3. Add new course" << endl;
    cout << "4. Display course list" << endl;
    cout << "5. Modify student name" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
};

void addNewStudent(Student students[], int& numStudents) {
    if (numStudents >= 5) {
        cout << "Error: Maximum number of students reached" << endl;
        return;
    }

    cout << "Enter details for student #" << numStudents + 1 << endl;
    cout << "Enter student ID: ";
    cin >> students[numStudents].id;
    cout << "Enter student name: ";
    cin >> students[numStudents].name;
    cout << "Enter student nickname: ";
    cin >> students[numStudents].nickname;

    numStudents++;
}

void displayStudentList(Student students[], int numStudents) {
    cout << "Student List:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student #" << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << endl;
    }
}

void addNewCourse(Course courses[], int& numCourses) {
    if (numCourses >= 2) {
        cout << "Error: Maximum number of courses reached" << endl;
        return;
    }

    cout << "Enter details for course #" << numCourses + 1 << endl;
    cout << "Code: ";
    cin >> courses[numCourses].code;
    cout << "Name: ";
    cin >> courses[numCourses].name;
    cout << "Lecturer: ";
    cin >> courses[numCourses].lecturer;

    numCourses++;
}

void displayCourseList(Course courses[], int numCourses) {
    cout << "Course List:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course #" << i + 1 << endl;
        cout << "Code: " << courses[i].code << endl;
        cout << "Name: " << courses[i].name << endl;
        cout << "Lecturer: " << courses[i].lecturer << endl;
        cout << endl;
    }
}

void modifyStudentName(Student students[], int numStudents) {
    if (numStudents == 0) {
        cout << "No students found." << endl;
        return;
    }

    cout << "Select a student to modify:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].id << ": " << students[i].name << endl;
    }

    int selectedID;
    cout << "Enter student ID: ";
    cin >> selectedID;

    int selectedIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == selectedID) {
        selectedIndex = i;
        break;
    }
}

if (selectedIndex == -1) {
    cout << "Student not found." << endl;
    return;
}

cout << "Enter new name: ";
cin.ignore();
getline(cin, students[selectedIndex].name);

cout << "Name modified." << endl;
}