/*
Exercise 2:
Write a program that consists of the following new structure type;
Structure Name: Book
Structure Members:
a) char b_name[50]
b) char author[50]
Based on the structure type created, create two objects; book1, book2. The value of the
object should be initialized by the programmer. To print out the details, the value should be
displayed by using pointer.
*/

#include <iostream>
#include <string>
using namespace std;

struct Book{
    char bName[100];
    char author[100];
};

void printDetails(Book*);

int main(){
    Book book1 = {"The Algorithm Design Manual", "Steven S. Skiena"};
    Book book2 = {"Design Patterns: Elements of Reusable Object-Oriented Software", "Erich Gamma"};
    Book* ptrBook1 = &book1;
    Book* ptrBook2 = &book2;
    
    cout << "Book Details:" << endl;
    printDetails(ptrBook1);
    printDetails(ptrBook2);
    
    return 0;
}

void printDetails(Book* book){
    cout << "Book Name: " << book->bName << endl;
    cout << "Author: " << book->author << endl << endl;
}
