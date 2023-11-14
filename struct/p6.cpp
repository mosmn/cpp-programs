#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Author {
    int id;
    string fullname;
    string nickname;
    int age;
};

struct Book {
    int id;
    string title;
    int year;
    double price;
    Author author;
};

void addNewAuthor(Author &author) {
    cout << "Enter Author Information" << endl;
    cout << "Author ID: ";
    cin >> author.id;
    cout << "Fullname: ";
    cin.ignore();
    getline(cin, author.fullname);
    cout << "Nickname: ";
    getline(cin, author.nickname);
    cout << "Age: ";
    cin >> author.age;
}

void displayAuthorList(Author &author) {
    cout << "List of all authors" << endl;
    cout << "Author ID:" << author.id << endl;
    cout << "Fullname: " << author.fullname << endl;
    cout << "Nickname: " << author.nickname << endl;
    cout << "Age: " << author.age << endl << endl;
}

void addNewBook(Book &book) {
    cout << "Enter Book Information" << endl;
    cout << "Book ID:";
    cin >> book.id;
    cout << "Title: ";
    cin.ignore();
    getline(cin, book.title);
    cout << "Year: ";
    cin >> book.year;
    cout << "Price:RM";
    cin >> book.price;
    addNewAuthor(book.author);
}

void displayBookList(Book &book) {
    cout << "List of all books" << endl;
    cout << "Book ID: " << book.id << endl;
    cout << "Title: " << book.title << endl;
    cout << "Year: " << book.year << endl;
    cout << "Price:RM" << fixed << setprecision(2) << book.price << endl;
    displayAuthorList(book.author);
}

int main() {
    int choice;
    Book book;
    Author author;

    do {
        cout << endl << "Menu" << endl;
        cout << "1. Add New Author" << endl;
        cout << "2. Display Author List" << endl;
        cout << "3. Add New Book" << endl;
        cout <<"4. Display Book List" << endl;
        cout << "5. Quit the Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addNewAuthor(author);
                break;
            case 2:
                displayAuthorList(author);
                break;
            case 3:
                addNewBook(book);
                break;
            case 4:
                displayBookList(book);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}