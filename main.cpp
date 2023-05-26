#include <iostream>
#include <iomanip>

using namespace std;

double GetWeeklyHours (void) {
    double h = 46.50;
    return h;
}

double GetSalary(void) {
    double salary = 26.48;
    return salary;
}

int main(){
    double hours, salary, WeeklySalary;
    hours = GetWeeklyHours();
    salary = GetSalary();
    cout << "Weekly Hours: " << hours << '\n';
    cout<<"Hourly Salary: " << salary << '\n';
    WeeklySalary = hours * salary;
    cout << "Weekly Salary: " << WeeklySalary << '\n';
    return 0;
}