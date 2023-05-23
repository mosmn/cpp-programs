#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 3.456;

    cout << setw(10) << setfill('@') << a << endl;
    cout << fixed << setprecision(2)<< left << setw(10) << setfill('*') << a << endl;
    cout  << setprecision(1) << right << setw(15) << setfill('-') << a << endl;
    return 0;
}