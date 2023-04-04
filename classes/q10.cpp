/*
Create a class called Invoice that a hardware store might use to represent an invoice for an
item sold at a store. An Invoice should include four data members – a part number (type
string), a part description (type string), a quantity of the item being purchased(type int) and a
price item (type int). Your class should have a constructor that initializes the four data members.
Provide a set and a get function for each data member. In addition, provide a member
function named getInvoiceAmount that calculates the invoice amount (i.e.: multiplies the
quantity by the price item), then returns the amount as an int value. If the quantity is not
positive, it should be set to 0. If the price per item is not positive, it should be set to 0 too. Write
a test program that demonstrates class Invoice’s capabilities.
*/

#include <iostream>
#include <string>
using namespace std;

class Invoice {
public:
    void setPartNumber(string a){
        partNumber = a;
    }
    string getPartNumber(){
        return partNumber;
    }
    void setPartDescription(string a){
        partDescription = a;
    }
    string getPartDescription(){
        return partDescription;
    }
    void setQuantity(int a){
        quantity = (a > 0) ? a : 0;
    }
    int getQuantity(){
        return quantity;
    }
    void setPrice(int a){
        price = (a > 0) ? a : 0;
    }
    int getPrice(){
        return price;
    }
    int getInvoiceAmount(){
        return quantity * price;
    }
    Invoice (){
        partNumber = "";
        partDescription = "";
        quantity = 0;
        price = 0;
    }
private:
    string partNumber;
    string partDescription;
    int quantity;
    int price;
};

int main() 
{
    Invoice invoice1;
    invoice1.setPartNumber("1234");
    invoice1.setPartDescription("Hammer");
    invoice1.setQuantity(10);
    invoice1.setPrice(10);
    cout << "Part Number: " << invoice1.getPartNumber() << endl;
    cout << "Part Description: " << invoice1.getPartDescription() << endl;
    cout << "Quantity: " << invoice1.getQuantity() << endl;
    cout << "Price: " << invoice1.getPrice() << endl;
    cout << "Invoice Amount: " << invoice1.getInvoiceAmount() << endl;

    return 0;
}