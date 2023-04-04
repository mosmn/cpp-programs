/*
Given the following UML Class diagram:
Book
+id: int
+title: string
+author: string
+price: double
+year: int
+ symbol is used for public access modifier
# symbol is used for protected access modifier
- symbol is used for private access modifier
Create an array of 5 objects. Get users to enter the value of class members with the following
information:
id title author price year
1 Learn C++ Programming Chand Miyan 99.99 2015
2 Computer Organization
and Architecture
William Stallings 79.00 2019
3 Professional CUDA C
Programming
John Cheng 180.00 2018
4 C++ How to Program Paul Deitel 15.00 1999
5 Phyton Programming Mark Lutz 120.00 2020
Using repetition structure, display the information on the array of objects created. Also, using
repetition structure, determine and display the book with the cheapest price and the book
published in the most recent year.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    double price;
    int year;
};

int main() 
{
    Book collection[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter Book ID: ";
        cin >> collection[i].id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, collection[i].title);
        cout << "Enter Author: ";
        getline(cin, collection[i].author);
        cout << "Enter Price: ";
        cin >> collection[i].price;
        cin.ignore();
        cout << "Enter Year: ";
        cin >> collection[i].year;
        cout << endl;
    }

    cout << "Your collection:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Book ID: " << collection[i].id << endl;
        cout << "Title: " << collection[i].title<< endl;
        cout << "Author: " << collection[i].author<< endl;
        cout << "Price: " << collection[i].price<< endl;
        cout << "Year: " << collection[i].year<< endl;
        cout << endl;
    }

    int cheapestBook = 0, latestBook = 0;
    
    double cheapest = collection[0].price;
    int mostRecentYear = collection[0].year;
    for(int i = 1; i < 5; i++) {
        if(collection[i].price < cheapest){
            cheapest = collection[i].price;
            cheapestBook = i;
        }
        if(collection[i].year < mostRecentYear){
            mostRecentYear = collection[i].year;
            latestBook = i;
        }
    }

    cout << "Cheapest: " << collection[cheapestBook].title<< endl;
    cout << "Most recent: " << collection[latestBook].title<< endl;
    return 0;
}

/*
TEST:

Enter Book ID: 1
Enter Title: Learn C++ Programming
Enter Author: Chand Miyan
Enter Price: 99.99
Enter Year: 2015

Enter Book ID: 2
Enter Title: Computer Organization
and ArchitectureEnter Author: William Stallings
Enter Price: 79.00
Enter Year: 2019

Enter Book ID: 3
Enter Title: Professional CUDA C Programming
Enter Author: John Cheng
Enter Price: 180.00
Enter Year: 2018

Enter Book ID: 4
Enter Title: C++ How to Program
Enter Author: Paul Deitel 
Enter Price: 15.00
Enter Year: 1999

Enter Book ID: 5
Enter Title: Phyton Programming
Enter Author: Mark Lutz
Enter Price: 120.00
Enter Year: 2020

Your collection:
Book ID: 1
Title: Learn C++ Programming
Author: Chand Miyan
Price: 99.99
Year: 2015

Book ID: 2
Title: Computer Organization
Author: and ArchitectureWilliam Stallings
Price: 79
Year: 2019

Book ID: 3
Title: Professional CUDA C Programming
Author: John Cheng
Price: 180
Year: 2018

Book ID: 4
Title: C++ How to Program
Author: Paul Deitel 
Price: 15
Year: 1999

Book ID: 5
Title: Phyton Programming
Author: Mark Lutz
Price: 120
Year: 2020

Cheapest: C++ How to Program
Most recent: C++ How to Program
*/