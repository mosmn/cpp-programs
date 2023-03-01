/*
Problem 3
Write a program to get 8 numbers from the user. Then the program will determine the
smallest number and largest number of an array.
*/

#include <iostream>
using namespace std;

int main() {
    int array[8];
    int smallest, largest;

    for(int i = 0; i < 8; i++) {
        cout << "Enter number #" << i+1 << ": ";
        cin >> array[i];
    }

    smallest = array[0];
    largest = array[0];
    for(int element = 0; element < 8; element++) {
        if(array[element] < smallest) {
            smallest = array[element];
        }
        if(array[element] > largest) {
            largest = array[element];
        }
    }

    cout << "The smallest number is " << smallest << endl;
    cout << "The largest number is " << largest << endl;

    return 0;
}
