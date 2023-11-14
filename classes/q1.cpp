/*
Write a program that defines a class called MyClass1 with one member function called
printmessage(). Define the printmessage() member function inside the class and
make it output the "C++ Classes" string. Create an instance of that class and use the object
to call the class member function. 
*/

#include <iostream>
#include <string>
using namespace std;

class MyClass1
{
   public:
   void printmessage() {
    cout << "C++ Classes"<< endl;
   }

};

int main()
{
    MyClass1 intro;
    MyClass1 *ptr = &intro;

    ptr->printmessage();
}