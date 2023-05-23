#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ofstream store("joey", ios::out);

    if(!store) {
        cerr << "File cannot open" << endl;
        exit(EXIT_FAILURE);
    }

    string name = "Joey Hernandez", type = "Full Time";
    double sales = 654.00, bonus = 163.50, totalSalary = 1817.50;

    store << name << endl << type << endl << sales << endl << bonus << endl << fixed << setprecision(2) << totalSalary << endl;

    store.close();

    ifstream display("joey");

    string vlaue;
    int i = 0;
    while(getline(display, vlaue)) {
        if(i == 0)
            cout << setw(30) << setfill('.') << left << "Name: " << right << vlaue << endl;
        else if(i == 1)
            cout << setw(30) << setfill('.') << left << "Status: " << right << vlaue << endl;
        else if(i == 2)
            cout << setw(30) << setfill('.') << left << "Sales (RM): " << right << vlaue << endl;
        else if(i == 3)
            cout << setw(30) << setfill('.') << left << "Bonus (RM): " << right << vlaue << endl;
        else
            cout << setw(30) << setfill('.') << left << "Total Salary (RM): " << right << vlaue << endl;
        i++;
    }

    store.close();
}