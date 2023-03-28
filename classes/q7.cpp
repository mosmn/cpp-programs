/*
Re-write the program written for Q6 by defining the Account class in a separate file called
Account.h (execises on separating class’ interface with implementation will be provided in Part
2).
*/

#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

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