/*
Write a program that creates a class called Account. The class represents customer’s bank
accounts. Include a data member of type int to represent the account balance. Provide a
constructor that receives an initial balance and uses it to initialize the data member. The
constructor should validate the initial balance to ensure that it’s greater than or equal to 0. If
not, set the balance to 0 and display error message indicating that the initial balance was invalid.
Provide three member functions:
a. credit() function should add an amount to the current balance.
b. debit() function should withdraw money from the Account and ensure that the
debit amount does not exceed the Account’s balance. If it does, the balance should be
left unchanged and the function should print a message indicating “Debit amount
exceeded account balance”.
c. getBalance() function should return the current balance.
The program shall create two Account objects and test the member functions of class
Account.
*/

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    Account(int ab) {
        if(ab >= 0)
            accountBalance = ab;
        else
            cout << "Initial balance is invalid, must be greater than or 0" << endl;
    }
    void credit(int amount) {
        accountBalance += amount;
    }
    void debit(int withdrawal) {
        if(withdrawal <= accountBalance)
            accountBalance -= withdrawal;
        else
            cout << "Debit amount exceeded account balance" << endl;
    }
    int getBalance() {
        return accountBalance;
    }
private:
    int accountBalance;
};

int main()
{
    Account jhon_3(10000);
    Account Mary211(743);

    jhon_3.credit(100);
    Mary211.credit(100);
    cout << "Jhon's balance after credit is: " << jhon_3.getBalance() << endl;
    cout << "Mary's balance after credit is: " << Mary211.getBalance() << endl;

    jhon_3.debit(1000);
    Mary211.debit(1000);
    cout << "Jhon's balance after debit is: " << jhon_3.getBalance() << endl;
    cout << "Mary's balance after debit is: " << Mary211.getBalance() << endl;

    return 0;
}