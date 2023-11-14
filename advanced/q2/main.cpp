/*
(Reference and Reference Parameters) Write a program to input cost of an item and its tax rate.
Then determine the cost of the item after it has been added with the tax in a function name
AddTax(), which will return the latest cost thru its reference parameter. Repeat until user
decides to terminate the program. The function definition of AddTax() function is as shown
below:
void AddTax(double rate, double& cost){
cost = cost + (rate/100)*cost;
}
*/

#include <iostream>
using namespace std;
void AddTax(double rate, double& cost);

int main()
{
    double rate, cost;
    char choice;
    do
    {
        cout << "Enter cost of item: ";
        cin >> cost;
        cout << "Enter tax rate: ";
        cin >> rate;
        AddTax(rate, cost);
        cout << "Cost of item after tax: " << cost << endl;
        cout << "Do you want to add tax to another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

void AddTax(double rate, double& cost)
{
    cost = cost + (rate/100)*cost;
}