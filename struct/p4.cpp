#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 5;
const int MAX_COURSES = 2;

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

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Add new student" << endl;
    cout << "2. Display student list" << endl;
    cout << "3. Add new course" << endl;
    cout << "4. Display course list" << endl;
    cout << "5. Modify student name" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

void addNewStudent(Student students[], int& numStudents) {
    if (numStudents >= MAX_STUDENTS) {
        cout << "Cannot add more students. Maximum limit reached." << endl;
        return;
    }

    cout << "Enter student ID: ";
    cin >> students[numStudents].id;

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, students[numStudents].name);

    cout << "Enter student nickname: ";
    getline(cin, students[numStudents].nickname);

    numStudents++;

    cout << "Student added." << endl;
}

void displayStudentList(Student students[], int numStudents) {
    if (numStudents == 0) {
        cout << "No students found." << endl;
        return;
    }

    cout << "List of students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].id << ": " << students[i].name << " (" << students[i].nickname << ")" << endl;
    }
}

void addNewCourse(Course courses[], int& numCourses) {
    if (numCourses >= MAX_COURSES) {
        cout << "Cannot add more courses. Maximum limit reached." << endl;
        return;
    }

    cout << "Enter course code: ";
    getline(cin, courses[numCourses].code);

    cout << "Enter course name: ";
    getline(cin, courses[numCourses].name);

    cout << "Enter lecturer name: ";
    getline(cin, courses[numCourses].lecturer);

    numCourses++;

    cout << "Course added." << endl;
}

void displayCourseList(Course courses[], int numCourses) {
    if (numCourses == 0) {
        cout << "No courses found." << endl;
        return;
    }

    cout << "List of courses:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << courses[i].code << ": " << courses[i].name << " (Lecturer: " << courses[i].lecturer << ")" << endl;
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

int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    Course courses[MAX_COURSES];
    int numCourses = 0;

    int choice;
do {
    displayMenu();
    cin >> choice;

    switch (choice) {
        case 1:
            addNewStudent(students, numStudents);
            break;
        case 2:
            displayStudentList(students, numStudents);
            break;
        case 3:
            addNewCourse(courses, numCourses);
            break;
        case 4:
            displayCourseList(courses, numCourses);
            break;
        case 5:
            modifyStudentName(students, numStudents);
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    cout << endl;
} while (choice != 6);

return 0;
}