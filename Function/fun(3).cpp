/* PROBLEM: Write a C++ program to determine the gross pay for each of several employees. The company pays basic salary for the first 40 hours worked of each employee and pay “time-and-a-half” for all hours worked more than 40 hours. Your program should input hours for each employee worked and the hourly rate and display the employee’s gross salary. User must enter value -1 to end the program. Implement the gross salary calculation in a function named calculateSalary(). */

#include <iostream>
#include <iomanip>
using namespace std;
float calculateSalary(int h, float r);

int main() {
    int hours;
    float rate, grossSalary;

    while (hours != -1) {
        cout << "Enter hours worked (-1 to end): ";
        cin >> hours;

        if (hours == -1) {
            break;
        }

        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> rate;

        grossSalary = calculateSalary(hours, rate);

        cout << "Salary is $" << fixed << setprecision(2) << grossSalary << endl;
    }

    return 0;
}

float calculateSalary(int h, float r) {
    int hoursTimeAndHalf = h - 40, normalHours = 40;
    float total = 0.0;

    if (h > 40) {
        total = (normalHours * r) + (hoursTimeAndHalf * (r * 1.5));
    } else {
        total = h * r;
    }

    return total;
}