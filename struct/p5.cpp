/*
Problem 5:
Based on Problem 1 until 4 above, modify the program so that the user will be able to
assign a student to a subject listed in the list. You may require adding a new variable in
Student structure to represent course taken. The program should display the student details,
together with the subject taken. One student can only take one subject.
*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 5;
const int MAX_COURSES = 2;

struct Student {
    int id;
    string name;
    string nickname;
    int courseIndex;
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
    cout << "6. Assign course to student" << endl;
    cout << "7. Exit" << endl;
    cout << "Please enter your choice: ";
}

void addNewStudent(Student students[], int& numStudents) {
    if (numStudents == MAX_STUDENTS) {
        cout << "Maximum number of students reached." << endl;
        return;
    }

    cout << "Enter student ID: ";
    cin >> students[numStudents].id;
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, students[numStudents].name);

    cout << "Enter student nickname: ";
    getline(cin, students[numStudents].nickname);

    students[numStudents].courseIndex = -1;

    numStudents++;
}

void displayStudentList(Student students[], int numStudents, Course courses[], int numCourses) {
    cout << "List of students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        if (students[i].courseIndex != -1) {
            cout << "Course taken: " << courses[students[i].courseIndex].name << endl;
        }
        cout << endl;
    }
}

void addNewCourse(Course courses[], int& numCourses) {
    if (numCourses == MAX_COURSES) {
        cout << "Maximum number of courses reached." << endl;
        return;
    }

    cout << "Enter course code: ";
    getline(cin, courses[numCourses].code);

    cout << "Enter course name: ";
    getline(cin, courses[numCourses].name);

    cout << "Enter lecturer name: ";
    getline(cin, courses[numCourses].lecturer);

    numCourses++;
}

void displayCourseList(Course courses[], int numCourses) {
    cout << "List of courses:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course code: " << courses[i].code << endl;
        cout << "Course name: " << courses[i].name << endl;
        cout << "Lecturer name: " << courses[i].lecturer << endl;
        cout << endl;
    }
}

void modifyStudentName(Student students[], int numStudents) {
    int id;
    cout << "Enter student ID: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            cout << "Enter new name: ";
            getline(cin, students[i].name);
            return;
        }

    }

    cout << "Student not found" << endl;
}

void assignCourseToStudent(Student students[], int numStudents, Course courses[], int numCourses) {
    int id;
    cout << "Enter student ID: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            if (!(students[i].courseIndex)) {
                cout << "Student has already taken a course" << endl;
                return;
            }

            string courseCode;
            cout << "Enter course code: ";
            getline(cin, courseCode);

            for (int j = 0; j < numCourses; j++) {
                if (courses[j].code == courseCode) {
                    students[i].courseIndex = j;
                    return;
                }
            }

            cout << "Course not found" << endl;
            return;
        }
    }

    cout << "Student not found" << endl;
}

int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    Course courses[MAX_COURSES];
    int numCourses = 0;

    int choice;
    do {
        displayMenu();

    if (!(cin >> choice)) {
        // Input failed. Clear the failbit flag and ignore the remaining characters.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice." << endl;
        continue;
    }

    cin.ignore();

        switch (choice) {
            case 1:
                addNewStudent(students, numStudents);
                break;
            case 2:
                displayStudentList(students, numStudents, courses, numCourses);
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
                assignCourseToStudent(students, numStudents, courses, numCourses);
                break;
            case 7:
                cout << "WE OUT hahahaha" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 7);

    return 0;
}
