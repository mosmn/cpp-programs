#include <iostream>
#include <math.h>
using namespace std;

inline double circleArea (double radius) {
    return M_PI * radius * radius;
}

int main()
{
    double radius = 0.0, area = 0.0;
    cout << "Enter radius: ";
    cin >> radius;
    
    area = circleArea(radius);
    cout << "\nArea is: " << area;
    return 0;
}
