#include <iostream>
using namespace std;

template < typename T>
T findMinimum(T x, T y) {
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int smallerInt = 0, num1 = 0, num2 = 0;
    char smallerChar, c1, c2;
    float smallerFloat = 0.0, no1 = 0.0, no2 = 0.0;
    
    cout << "enter 2 ints: ";
    cin >> num1 >> num2;
    cout << "smaller int: " << findMinimum(num1, num2) << endl;
    
    cout << "enter 2 chars: ";
    cin >> c1 >> c2;
    cout << "smaller char: " << findMinimum(c1, c2)<< endl;
    
    cout << "enter 2 floats: ";
    cin >> no1 >> no2;
    cout << "smaller float: " << findMinimum(no1, no2)<< endl;
}
