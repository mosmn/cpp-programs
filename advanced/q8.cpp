/*
(Function Overloading) Develop a C++ program that reads a dollar amount as an integer and
then prints the minimum number of bills of RM50, RM20, RM10, RM5 and RM1 denominations
in it. For example, if the dollar amount is RM179, your program should print that it consists of
three RM50, one RM20, zero RM10, one RM5 and four RM1 bills. Your program should execute
as long as the user wants to continue. Implement function overloading for determining the
denominators of the dollar amount entered by user. Sample IO of the program is as shown:

Input amount: RM 179
You have
3 RM50 bills,
1 RM20 bills,
0 RM10 bills,
1 RM5 bills,
and 4 RM1 bills.
Do you wish to continue? (Y/N): N
*/

#include <iostream>
#include <string>
using namespace std;
void PrintDenomination(int& a, int denomination);

int main() {
    char choice;
    int amount;
    do {
        cout << "Input amount: RM ";
        cin >> amount;
        cout << "You have" << endl;
        PrintDenomination(amount, 50);
        PrintDenomination(amount, 20);
        PrintDenomination(amount, 10);
        PrintDenomination(amount, 5);
        cout << "and " << amount << " RM1 bills." << endl;
        cout << endl;

        cout << "Do you wish to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

void PrintDenomination(int& a, int denomination) {
    int count = 0;
    while (a >= denomination) {
        a -= denomination;
        count++;
    }
    cout << count << " RM" << denomination << " bills," << endl;
}
