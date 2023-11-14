/*
Write a program that defines a class called MyClass4, which has two private data members
of type int and double. Outside the class, define a user-provided constructor accepting two
parameters. The constructor initializes both data members with arguments using the initializer.
Outside the class, define a function called printdata() which prints the values of both data
members.
*/

#include <iostream>
#include <string>
using namespace std;

class MyClass4
{
public:
    MyClass4(int a, double b);
    void printData();
private:
    int x;
    double y;
};

MyClass4::MyClass4(int a, double b) {
    x = a;
    y = b;
}

void MyClass4::printData(){
    cout << x << " & " << y << endl;
}

int main()
{
    MyClass4 obj(2, 9.9);

    obj.printData();    
    return 0;
}