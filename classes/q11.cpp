#include <iostream>
#include <string>
using namespace std;

class Account
{
    private:
        int accountBalance;
    public:
        Account(int balance)
        {
            if (balance >= 0)
            {
                accountBalance = balance;
            }
            else
            {
                cout << "Balance cannot be negative." << endl;
                accountBalance = 0;
            }
        }
        void credit(int amount)
        {
            accountBalance += amount;
        }
        void debit(int withdraw)
        {
            if (withdraw > accountBalance)
            {
                cout << "Debit amount exceeded account balance." << endl;
            }
            else
            {
                accountBalance -= withdraw;
            }
        }
        int getBalance()
        {
            return accountBalance;
        }
};

int main()
{
    Account account1(100);
    Account account2(-10);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    cout << "\nAdding 50 to account1 balance" << endl;
    account1.credit(50);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    cout << "\nAdding 500 to account2 balance" << endl;
    account2.credit(500);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    cout << "\nWithdrawing 25 from account1 balance" << endl;
    account1.debit(25);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    cout << "\nWithdrawing 100 from account2 balance" << endl;
    account2.debit(1000000);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;
}
