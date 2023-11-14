#include <iostream>
#include <math.h>
using namespace std;
void readDiameter(double &sDiameter, double &lDiameter);
void readPrice(double &sPrice, double &lPrice);
double unitPrice(double d, double p);
void lowestPrice(double sPizza, double lPizza);


void readDiameter(double &sDiameter, double &lDiameter)
{
    cout << "Enter the diameter of the small pizza (in inches): ";
    cin >> sDiameter;
    cout << "Enter the diameter of the large pizza (in inches): ";
    cin >> lDiameter;
}

void readPrice(double &sPrice, double &lPrice)
{
    cout << "Enter the price of the small pizza: ";
    cin >> sPrice;
    cout << "Enter the price of the large pizza: ";
    cin >> lPrice;
}

double unitPrice(double d, double p)
{
    double radius = d/2;
    double area = M_PI * radius * radius;
    return p/area;
}

void lowestPrice(double sPizza, double lPizza)
{
    if (sPizza < lPizza)
        cout << "The small pizza is the better buy." << endl;
    else if (sPizza > lPizza)
        cout << "The large pizza is the better buy." << endl;
    else
        cout << "The two pizzas are the same price." << endl;
}