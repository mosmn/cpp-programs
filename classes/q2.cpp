/*
Write a program that defines a class called MyClass2 with one private data member of type
int called x and two member functions. The first member function called setx(int
myvalue) will set the value of x to its parameter myvalue. The second member function is
called getx(), is of type int and returns a value of x. Make an instance of the class and use
the object to access both member functions.
*/

#include <iostream>
#include <string>
using namespace std;

class MyClass2
{
    public:
    void setx(int myvalue){
        x = myvalue;
    }

    int getx(){
        return x;
    }
    
    private:
    int x;
};

int main()
{
    MyClass2 intro;

    intro.setx(69);
    
    cout << "Here is the value of x: " << intro.getx();
}