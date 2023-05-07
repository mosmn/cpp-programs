#include <iostream>
#include "sales.h"
using namespace std;

int main()
{
    string name;
    int ID, status;
    double sales;
    int num, i;
    cout<<"How many employees?: ";
    cin >> num;
    salesPerson *list [num];
    for (i=0; i<num; i++) {
        cout<<"Name?: ";
        cin>> name;
        cout << "Worker's ID?: ";
        cin >> ID;
        cout<<"Employee status? (1) for full time, (2) for part time:";
        cin>> status;
        cout<<"Sales in RM?: ";
        cin>> sales;
        cout << endl;
        if (status == 1)
            list[i] = new fullTime(name, ID, "Full Time", sales);
        else
            list[i] = new partTime(name, ID, "Part Time", sales);
    }
    for (i=0; i<num; i++) {
        list[i] -> display();
        cout << endl;
    }
    return 0;
}