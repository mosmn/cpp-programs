#include <iostream>
using namespace std;

class Student {
    double points[4];
    int creditHour[4];
    string name;
    
    double calculateGPA(double p[], int ch[]);
public:
    Student(string nama);
    void GetPointers();
    void display();
};