/*
(Default Arguments and Empty Parameter List) Write a compete program to input and compute
volume of a cube using a single function CubeVolume() with or without default values of length,
width and height of the cube and display the output as shown below:
Use of default arguments and empty parameter list
Input                           length                          width                       height                      Volume
1. Default All                  2.0                             10.5                        5.55                        116.550
2. User All                     3.2                             6.78                         2.2                        47.731
3. Default height               4.98                            23.4                        5.55                        646.753
4. Default width & height       5.0                             10.5                        5.55                         291.375 
*hint: use setw() and left appropriately
*/

#include <iostream>
#include <iomanip>
using namespace std;

double CubeVolume(double = 2.0, double = 10.5, double = 5.55);

int main()
{
    double length, width, height;
    cout << "Use of default arguments and empty parameter list" << endl;
    cout << setw(30) << left << "Input" << setw(30) << left << "length" << setw(30) << left << "width" << setw(30) << left << "height" << setw(30) << left << "Volume" << endl;
    cout << setw(30) << left << "1. Default All" << setw(30) << left << 2.0 << setw(30) << left << 10.5 << setw(30) << left << 5.55 << setw(30) << left << CubeVolume() << endl;
    cout << setw(30) << left << "2. User All" << setw(30) << left << "3.2" << setw(30) << left << "6.78" << setw(30) << left << "2.2" << setw(30) << left << CubeVolume(3.2, 6.78, 2.2) << endl;
    cout << setw(30) << left << "3. Default height" << setw(30) << left << "4.98" << setw(30) << left << "23.4" << setw(30) << left << 5.55 << setw(30) << left << CubeVolume(4.98, 23.4) << endl;
    cout << setw(30) << left << "4. Default width & height" << setw(30) << left << "5.0" << setw(30) << left << "10.5" << setw(30) << left << 5.55 << setw(30) << left << CubeVolume(5.0) << endl;

    return 0;
}

double CubeVolume(double length, double width, double height)
{
    return length * width * height;
}
