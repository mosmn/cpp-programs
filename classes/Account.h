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
