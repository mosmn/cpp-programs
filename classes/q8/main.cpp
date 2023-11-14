#include <iostream>
#include "student.h"
using namespace std;

int main() {
    string nInput;
    
    cout << "Enter name: ";
    cin >> nInput;
    
    Student Mo(nInput);
    
    Mo.GetPointers();
    Mo.display();
    
    return 0;
}