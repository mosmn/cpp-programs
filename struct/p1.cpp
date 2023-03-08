#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string nickname;
};

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    while (numStudents < MAX_STUDENTS) {
        cout << "Enter details for student #" << numStudents + 1 << endl;
        cout << "ID: ";
        cin >> students[numStudents].id;
        cout << "Name: ";
        cin >> students[numStudents].name;
        cout << "Nickname: ";
        cin >> students[numStudents].nickname;

        numStudents++;

        char more;
        cout << "Enter details for another student? (y/n) ";
        cin >> more;
        if (more != 'y' && more != 'Y') {
            break;
        }
    }

    cout << endl << "Student Details:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student #" << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Nickname: " << students[i].nickname << endl;
        cout << endl;
    }

    return 0;
}
