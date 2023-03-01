/*
Problem 1
Write programs that ask to add a number entered by user. Ask the user to continue to add
another number. 
*/

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        cout << "Do you want to add another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "The sum of all numbers is " << sum << endl;

    return 0;
}