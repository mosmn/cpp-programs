/*
Write a program that defines a class called MyClass3 with a user-defined default constructor
and user-defined destructor. Define both constructor and destructor outside the class. Both
member functions will output suitable statement on the standard output. Create an object of a
class in function main.
*/

#include <iostream>
#include <string>
using namespace std;

class MyClass3
{
public:
    MyClass3();
    ~MyClass3();
};

MyClass3::MyClass3() {
    cout << "CREATED" << endl;
}

MyClass3::~MyClass3() {
    cout << "DESTROYED" << endl;
}

int main()
{
    MyClass3 isaObject;
    return 0;
}