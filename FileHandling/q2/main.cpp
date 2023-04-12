/*
Exercise 1 – Write data to file
Write a program to print the following sentences into a text file.
This is my first exercise on file stream.
Hoorey! I managed to write this text into a file.
The program should check whether the opening file is exists or not. It should notify the
current status of file opening, writing and closing to the user.
*/

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream file;
//     file.open("file.txt");
//     if (file.is_open())
//     {
//         cout << "File opened successfully" << endl;
//         file << "This is my first exercise on file stream." << endl;
//         file << "Hoorey! I managed to write this text into a file." << endl;
//         file.close();
//         cout << "File closed successfully" << endl;
//     }
//     else
//     {
//         cout << "File failed to open" << endl;
//     }
//     return 0;
// }

/*
Exercise 2 – Read data from file
Write a program to read the sentences that you have stored in an external file from
Exercise 1. Re-display the sentences back into the program.
The program should check whether the opening file exists or not. It should notify the
current status of file opening, reading and closing to the user.
*/

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream file;
//     file.open("file.txt");
//     if (file.is_open())
//     {
//         cout << "File opened successfully" << endl << endl;;
//         string line;
//         while (getline(file, line))
//         {
//             cout << line << endl;
//         }
//         file.close();
//         cout << endl << "File closed successfully" << endl ;
//     }
//     else
//     {
//         cout << "File failed to open" << endl;
//     }
//     return 0;
// }

/* 
Exercise 3 – Read data from file
Write a program that combines the write capabilities in Exercise 1 and read capabilities in
Exercise 2, where you can write and read from an external file using the same program.
The program should check whether the opening file exists or not. It should notify the
current status of file opening, writing, reading and closing to the user.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "#Writing to file#" << endl;
    ofstream file;
    file.open("file.txt");
    if (file.is_open())
    {
        cout << "File opened successfully to write" << endl;
        file << "This is my first exercise on file stream." << endl;
        file << "Hoorey! I managed to write this text into a file." << endl;
        file.close();
        cout << "Sentences written to file successfully, file closed" << endl << endl;
    }
    else
    {
        cout << "File failed to open" << endl;
    }

    cout << "#Reading from file#" << endl;
    ifstream file2;
    file2.open("file.txt");
    if (file2.is_open())
    {
        cout << "File opened successfully" << endl << endl;;
        string line;
        while (getline(file2, line))
        {
            cout << line << endl;
        }
        file2.close();
        cout << endl << "File closed successfully" << endl ;
    }
    else
    {
        cout << "File failed to open" << endl;
    }
    return 0;
}

