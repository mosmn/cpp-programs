/*
Using two-dimensional arrays, write a program which multiplies an axb matrix of
integers by a cxd matrix of integers. Ask the user to enter a value for first matrix and
second matrix. The multiple the matrix. (Hint: discrete structure class)

I/O format:

FIRST (2x2) MATRIX:
Insert a value for first line : 3 4
Insert a value for second line: 5 7
SECOND (2x2) MATRIX:
Insert a value for first line: 1 1
Insert a value for second line: 2 2

 3 4
 5 7
TIMES
 1 1
 2 2

EQUALS
 11 11
 19 1
*/

#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    cout << "FIRST (2x2) MATRIX:" << endl;
    for(int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "Insert a value for first line: ";
        } else {
            cout << "Insert a value for second line: ";
        }
        for(int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "SECOND (2x2) MATRIX:" << endl;
    for(int i = 0; i < 2; i++) {
        if (i == 0) {
            cout << "Insert a value for first line: ";
        } else {
            cout << "Insert a value for second line: ";
        }
        for(int j = 0; j < 2; j++) {
            cin >> matrix2[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix1[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "TIMES" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix2[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "EQUALS" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << result[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;

}