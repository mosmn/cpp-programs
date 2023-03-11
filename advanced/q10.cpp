/*
(Function Template) Write a C++ program that uses a function template called max() to
determine the largest of three arguments. Test the program using integer, character and double
arguments.
*/

#include <iostream>
using namespace std;

template <class T>
T max(T a, T b, T c)
{
    T max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "The largest integer is " << max(a, b, c) << endl;
    char d, e, f;
    cout << "Enter three characters: ";
    cin >> d >> e >> f;
    cout << "The largest character is " << max(d, e, f) << endl;
    double g, h, i;
    cout << "Enter three doubles: ";
    cin >> g >> h >> i;
    cout << "The largest double is " << max(g, h, i) << endl;
    return 0;
}