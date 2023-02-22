#include <iostream>
#include <math.h>
using namespace std;

inline double circleArea (double x) {
    return M_PI * x * x;
}

int main()
{
    double radius = 0.0, area = 0.0;
    cout << "enter radius: ";
    cin >> radius;
    
    area = circleArea(radius);
    cout << "\narea is: " << area;
    return 0;
}
