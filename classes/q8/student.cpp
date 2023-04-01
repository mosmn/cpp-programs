#include <iostream>
#include <string>
#include "student.h"
using namespace std;


double Student::calculateGPA(double p[], int ch[]) {
        double n = 0.0, d= 0.0;
        for(int i = 0; i < 4; i++) {
            n += (p[i] * ch[i]);
            d += ch[i];
        }
        return n/d;
}

Student::Student(string nama) {
        name = nama;
    }
    
void Student::GetPointers()
    {
        for(int i = 0; i < 4; i++) {
            cout << "Points #" << i+1 << ": ";
            cin >> points[i];
            
            cout << "Credit Hour #" << i+1 << ": ";
            cin >> creditHour[i];
        }
}


void Student::display() {
    cout << "Name: " << name << endl;
    cout << "GPA: " << calculateGPA(points, creditHour) << endl;
}
  