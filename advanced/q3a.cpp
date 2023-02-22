#include <iostream>
using namespace std;

int findMinimum1(int x, int y);
char findMinimum2(char a, char b);
float findMinimum3(float z, float w);

int main()
{
    int smallerInt = 0, num1 = 0, num2 = 0;
    char smallerChar, c1, c2;
    float smallerFloat = 0.0, no1 = 0.0, no2 = 0.0;
    
    cout << "enter 2 ints: ";
    cin >> num1 >> num2;
    cout << "smaller int: " << findMinimum1(num1, num2) << endl;
    
    cout << "enter 2 chars: ";
    cin >> c1 >> c2;
    cout << "smaller char: " << findMinimum2(c1, c2)<< endl;
    
    cout << "enter 2 floats: ";
    cin >> no1 >> no2;
    cout << "smaller float: " << findMinimum3(no1, no2)<< endl;
}

int findMinimum1(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

char findMinimum2(char a, char b){
        if (a < b)
        return a;
    else
        return b;
}

float findMinimum3(float z, float w){
        if (z < w)
        return z;
    else
        return w;
}