/*
(Reference and Reference Parameters) Write a complete program with the two alternate
functions specified below, each of which triples the variable count defined in main. Then
compare and contrast the two approaches. The two functions are:
a. Function tripleByValue() that passes a copy of count by value, triples the copy and
returns the new value.
b. Function tripleByReference() that passes count by reference via a reference parameter
and triples the original value of count through its reference parameter.
*/

#include <iostream>
using namespace std;

int tripleByValue(int);
void tripleByReference(int &count);

int main()
{
    int count = 0;
    cout << "Enter a number: ";
    cin >> count;
    cout << "The number tripled by value is: " << tripleByValue(count) << endl;
    cout << "The number tripled by reference is: ";
    tripleByReference(count);
    cout << count << endl;
    return 0;
}

int tripleByValue(int count)
{
    return count * 3;
}

void tripleByReference(int &count)
{
    count *= 3;
}