/*
Exercise 1:
Write a program that consists of the following new structure type;
Structure Name: Beverages
Structure Members:
a) char name[10]
b) int price
Based on the structure type created, create two objects; coffee, tea. The program should be
able to get the input from user and print out the details of the entered coffee and tea.
*/

#include <iostream>
#include <string>
using namespace std;

struct Beverages {
    char name[10];
    int price;
};

int main() {
    Beverages coffee, tea;
    Beverages *ptrCoffee, *ptrTea;
    ptrCoffee = &coffee;
    ptrTea = &tea;

    cout << "Enter name of coffee: ";
    cin.getline(ptrCoffee->name, 10);
    cout << "Enter price of coffee: ";
    cin >> ptrCoffee->price;
    cin.ignore();

    cout << "Enter name of tea: ";
    cin.getline(ptrTea->name, 10);
    cout << "Enter price of tea: ";
    cin >> ptrTea->price;
    cin.ignore();

    cout << "Details of coffee:" << endl;
    cout << "Name: " << ptrCoffee->name << endl;
    cout << "Price: " << ptrCoffee->price << endl;

    cout << endl;

    cout << "Details of tea:" << endl;
    cout << "Name: " << ptrTea->name << endl;
    cout << "Price: " << ptrTea->price << endl;

    return 0;
}
