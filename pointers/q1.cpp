/*
. (Pointer and array) Write a C++ program that asks the user to enter the length of an array
of integers. Allocate memory for the array using a pointer, and then prompt the user to
enter each element of the array. After the user has entered all the elements, your
program should calculate the average of the values in the array and print it to the screen.
Sample IO of the program is as shown below:

Enter the length of the array: 4
Enter element 0: 10
Enter element 1: 20
Enter element 2: 30
Enter element 3: 40
The average of the values in the array is 25
*/

#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter the length of the array: ";
    cin >> len;

    int *ptr;
    
    ptr = new int[len];
    
    for (int i = 0; i < len; ++i) {
        cout << "Enter element" << i<< " : ";
        cin >> *(ptr + i);
    }

    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += *(ptr + i);
    }

    cout << "The average of the values in the array is " << sum / len << endl;

    delete [] ptr;

    return 0;
}