/*
(Functions Definitions in Header File) The large size of an item is not always a better buy than
smaller size. This is particularly true when buying pizzas. Pizza sizes are given as the diameter of
the pizza in inches. However, the quantity of pizza is determined by the area of the pizza, and
the area is not proportional to the diameter. Most people cannot easily estimate the difference
in area between a 10-inch pizza and a 12-inch pizza and so cannot easily determine which sizes
the is best buy – that is, which size has the lowest price per square inch. Using readDiameter()
function, read diameter of a small and a large pizza (in inches) and using readPrice() function,
read prices of the pizzas. In a unitPrice() function, given the diameter and price of a pizza,
compute the radius and area of the pizza and return the price/area. In another function,
lowestPrice(), determine the better buy between the two pizzas with cheaper unit price of pizza
per square inch. Write all the user-defined functions in a user-defined header file. Repeat until
user decides to stop comparing unit price of pizzas. Among the formulas to be used in your
program are as listed below:
radius = diameter/2
area = PI * radius * radius
*/ 

#include "header.h"

int main()
{
    double smallDiameter=0.0, largeDiameter=0.0, smallPrice=0.0, largePrice=0.0, smallPizza=0.0, largePizza=0.0;
    char choice;
    do
    {
        readDiameter(smallDiameter, largeDiameter);
        readPrice(smallPrice, largePrice);
        smallPizza = unitPrice(smallDiameter, smallPrice);
        largePizza = unitPrice(largeDiameter, largePrice);
        lowestPrice(smallPizza, largePizza);
        cout << "Do you want to compare unit price of pizzas? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
