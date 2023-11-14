/*
(Function Overloading) Re-write the program written for Question 1 of Lab 2(1) to determine
price of a round pizza per square inch as compared to rectangle pizza price per square inch.
Overload the unitPrice() function to find out the price of a rectangle pizza per square inch (you
will have to read the length and width of the rectangle pizza from user). Then determine
whether the round or the rectangle pizza is the better buy. Formula to determine area of
rectangle pizza is as follows:
area = length * width
*/

#include <iostream>
#include <math.h>
using namespace std;
void readSize(double &diameter, double &length, double &width);
void readPrice(double &roundPrice, double &rectPrice);
double unitPrice(double d, double p);
double unitPrice(double l, double w, double p);
void lowestPrice(double roundPizza, double rectPizza);


int main()
{
    double diameter, length, width, roundPrice, rectPrice;
    double roundPizza, rectPizza;
    readSize(diameter, length, width);
    readPrice(roundPrice, rectPrice);
    roundPizza = unitPrice(diameter, roundPrice);
    rectPizza = unitPrice(length, width, rectPrice);
    lowestPrice(roundPizza, rectPizza);
    return 0;
}

void readSize(double &diameter, double &length, double &width)
{
    cout << "Enter the diameter of the Round pizza (in inches): ";
    cin >> diameter;
    cout << "Enter the length of the Rectangle pizza (in inches): ";
    cin >> length;
    cout << "Enter the width of the Rectangle pizza (in inches): ";
    cin >> width;
}

void readPrice(double &roundPrice, double &rectPrice)
{
    cout << "Enter the price of the Round pizza: ";
    cin >> roundPrice;
    cout << "Enter the price of the Rectangle pizza: ";
    cin >> rectPrice;
}

double unitPrice(double d, double p)
{
    double radius = d/2;
    double area = M_PI * radius * radius;
    return p/area;
}

double unitPrice(double l, double w, double p)
{
    double area = l * w;
    return p/area;
}

void lowestPrice(double roundPizza, double rectPizza)
{
    if (roundPizza < rectPizza)
        cout << "The Round pizza is the better buy." << endl;
    else if (roundPizza > rectPizza)
        cout << "The Rectangle pizza is the better buy." << endl;
    else
        cout << "The two pizzas are the same price." << endl;
}
