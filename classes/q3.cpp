/*
Write a program to calculate these 4 arithmetic operations; summation, subtraction,
multiplication, and division of two values entered by the user. Create a class called
MyCalculator. This class should have 2 private members to hold the values, and four
functions to perform the arithmetic operations. Display the result of these arithmetic
operations.
*/

#include <iostream>
#include <string>
using namespace std;

class ArithOp
{
    public:
    void setx(int myxvalue){
        x = myxvalue;
    }
    
    void sety(int myyvalue){
        y = myyvalue;
    }

    int add() {
        return x+y;
    }

    int sub() {
        return x-y;
    }

    int mul() {
        return x*y;
    }

    int div() {
        return x/y;
    }
    
    private:
    int x;
    int y;
};

int main()
{
    int result, a, b;

    cout << "enter 2 values: ";
    cin >> a >> b;

    ArithOp test1;

    test1.setx(a);
    test1.sety(b);

    cout << "+: " << test1.add() << endl;
    cout << "-: " << test1.sub() << endl;
    cout << "*: " << test1.mul() << endl;
    cout << "/: " << test1.div() << endl;

    return 0;
}