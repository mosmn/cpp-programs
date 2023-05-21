#include <iostream>
#include <string>
#include "belummakan.h"
using namespace std;

int main()
{
    int i = 0, type = 0, numOfOrder = 0;
    char continueInput;
    string firstName, lastName;
    belummakan *t[50];

    do
    {
        cout << "Order belummakan " << i + 1 << endl;
        cout << "Roti Canai\t\t -> Press 1\n";
        cout << "Nasi Goreng\t\t -> Press 2\n";
        cout << "Key in choice: ";
        cin >> type;
        
        cout <<  "Insert customer first name: ";
        cin >> firstName;
        cout <<  "Insert customer last name: ";
        cin >> lastName;
        cout <<  "Insert number of order: ";
        cin >> numOfOrder;

        cout << "\nRe-display Customer Order: Order " << i + 1 << endl;
        if (type == 1)
        {
            t[i] = new rotiCanai(firstName, lastName, numOfOrder);
        }
        else if (type == 2)
        {
            t[i] = new nasiGoreng(firstName, lastName, numOfOrder);
        }
        t[i]->displayOrder();

        cout << endl << "******************************************************" << endl;
        cout << "Continue? (Y/N): ";
        cin >> continueInput;
        i++;
    } while (continueInput == 'Y' || continueInput == 'y');
}