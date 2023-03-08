/*
Exercise 3
Write a program that consists of the following new structure type;
Structure Name: mobilephone
Structure Members:
a) char pModel[10]
b) int price
Based on the structure type created, create three objects; apple, blackberry, samsung. The
value of the object should be initialized by the programmer. There should be a function to
print out the details, and the value should be displayed by using a pointer.
*/

#include <iostream>
#include <string>
using namespace std;

struct mobilephone {
    char pModel[100];
    int price;
};

void printDetails(mobilephone *phone) {
    cout << "Phone model: " << phone->pModel << endl;
    cout << "Price: RM " << phone->price << endl;
    cout << endl;
}

int main() {
    mobilephone apple = {"iPhone 13", 4399};
    mobilephone blackberry = {"KEYone", 2399};
    mobilephone samsung = {"Galaxy S21", 3599};
    
    mobilephone *ptrPhone = &apple;
    printDetails(ptrPhone);
    
    ptrPhone = &blackberry;
    printDetails(ptrPhone);
    
    ptrPhone = &samsung;
    printDetails(ptrPhone);
    
    return 0;
}
