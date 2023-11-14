#include <iostream>
// #include <string>
using namespace std;

class belummakan 
{
protected:
    string firstName;
    string lastName;
    string type;
    int numOfOrder;
    double price;
    virtual void calculate() = 0;
public:
    belummakan(string fn, string ln, int noo)
    {
        firstName = fn;
        lastName = ln;
        numOfOrder = noo;
    }
    void displayOrder()
    {
        calculate();
        cout << "Name: " << lastName << ", " << firstName << ": Makan-makan for " << numOfOrder << " person\n";
        cout << "You will makan: " << type << "\n";
        cout << "Total Price: " << price << endl;
    }
};

class rotiCanai : public belummakan
{
private:
    void calculate()
    {
        price = numOfOrder * 1.5;
    }
public:
    rotiCanai(string fn, string ln, int noo):belummakan(fn, ln, noo) {
        type = "Roti Canai";
    }
};

class nasiGoreng : public belummakan
{
private:
    void calculate()
    {
        price = numOfOrder * 7.8;
    }
public:
    nasiGoreng(string fn, string ln, int noo):belummakan(fn, ln, noo) {
        type = "Nasi Goreng";
    }
};
