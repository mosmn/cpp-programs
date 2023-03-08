#include <iostream>
#include <string>

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

int main() {
    const int MAX_COURSES = 2; // maximum number of courses
    Student students[MAX_COURSES]; // array to store student data
    Course courses[MAX_COURSES]; // array to store course data
    int numCourses = 0; // number of courses entered so far

    // loop to allow user to enter details for up to MAX_COURSES courses
    while (numCourses < MAX_COURSES) {
        cout << "Enter details for course #" << numCourses + 1 << endl;
        cout << "Code: ";
        cin >> courses[numCourses].code;
        cout << "Name: ";
        cin >> courses[numCourses].name;
        cout << "Lecturer: ";
        cin >> courses[numCourses].lecturer;

        numCourses++;

        // check if user wants to enter more courses
        char more;
        cout << "Enter details for another course? (y/n) ";
        cin >> more;
        if (more != 'y' && more != 'Y') {
            break;
        }
    }

    // display the details entered by the user for each course
    cout << endl << "Course Details:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course #" << i + 1 << endl;
        cout << "Code: " << courses[i].code << endl;
        cout << "Name: " << courses[i].name << endl;
        cout << "Lecturer: " << courses[i].lecturer << endl;
        cout << endl;
    }

    return 0;
}
