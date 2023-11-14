#include <iostream>
using namespace std;
#define SIZE 80

int main()
{
    char input1[SIZE];
    char input2[SIZE];
    cout << "Enter your FULL name: \n";
    cin >> input1;
    cout << "The following name was read by using cin\n"
         << input1 << endl
         << endl;
    fflush(stdin);
    cout << "Enter your FULL name: \n";
    cin.get(input2, SIZE);
    cout << "The following name was read by using cin.get()\n"
         << input2 << endl
         << endl;
}