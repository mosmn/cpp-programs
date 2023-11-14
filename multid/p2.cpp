/*
Problem 2
Write a program that asks the user to enter 8 integers of an array. The program must count
and write how many integers are greater than or equal to 5.
*/

#include <iostream>
using namespace std;

int main() {
    int array[8];
    int intsGreaterThan5 = 0;

    for(int i = 0; i < 8; i++) {
        cout << "Enter number #" << i+1 << ": ";
        cin >> array[i];
    }

    for(int element = 0; element < 8; element++) {
        if(array[element] >= 5) {
            intsGreaterThan5++;
        }
    }

    cout << "There are " << intsGreaterThan5 << " integers greater than or equal to 5." << endl;

    return 0;
}