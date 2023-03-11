/*
(Inline Function) Write a C++ program that prompts the user for the radius of a circle, then
calls inline function circleArea() to calculate the area of the circle. The area of a circle is pi
times the radius squared (A = π r²).
*/

#include <iostream>
#include <cmath>
using namespace std;
inline double circleArea(double radius);

int main(){
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << circleArea(radius) << endl;
    return 0;
}

inline double circleArea(double radius){
    return M_PI * pow(radius, 2);
}