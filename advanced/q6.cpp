#include <iostream>
#include <math.h>
using namespace std;

int tripleByValue (int x);
void tripleByAlias (int &);
void tripleByReference (int *count);

int main()
{
    int count = 0, byValue = 0;
    cout << "enter a value: ";
    cin >> count;
    
    cout << "call by value: " << tripleByValue(count) << endl;
    
    cout << "call by reference: ";
    tripleByAlias(count);
    cout << count << endl;
    
    cout << "call by pointer: ";
    tripleByReference(&count);
    cout << count;
}

int tripleByValue (int x) {
    return x * 3;
}

void tripleByAlias (int &count){
    count *= 3;
}

void tripleByReference (int *count){
    *count *= 3;
}
