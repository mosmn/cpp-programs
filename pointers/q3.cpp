/*
(Pointer and function) Write a C++ program to create 2 arrays below:
int array1[] = {1, 2, 3, 4, 5};
int size1 = sizeof(array1) / sizeof(int);
int array2[] = {4, 5, 6, 7, 8};
int size2 = sizeof(array2) / sizeof(int);
Then write a function that takes two pointers to the above arrays and their sizes as arguments.
The function should return a pointer to a new array that contains the combination of the
elements of the two input arrays (i.e., all the elements from both arrays with duplicates
removed). The function should also modify the size argument to be the size of the new array.
Use below function prototype:
int* unionArrays(int* array1, int size1, int* array2, int size2, int& size)

To remove the duplicate, you may use Boolean data type declaration below:
bool isDuplicate = false;

Sample IO format of the program is as shown below:
New array: 1 2 3 4 5 6 7 8
Size of new array: 8
*/

#include <iostream>
using namespace std;
int* unionArrays(int* array1, int size1, int* array2, int size2, int& size);

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(int);

    int array2[] = {4, 5, 6, 7, 8};
    int size2 = sizeof(array2) / sizeof(int);

    int size = 0;
    int* newArray = unionArrays(array1, size1, array2, size2, size);

    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    cout << "Size of new array: " << size << endl;
}

int* unionArrays(int* arr1, int s1, int* arr2, int s2, int& sNew) {
    int* newArr = new int[s1 + s2];

    for (int i = 0; i < s1; i++) {
        newArr[i] = arr1[i];
    } // we added arr1 12345 to the new array 

    int index = 5;
    for (int i = 0; i < s2; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < s1; j++) {
            if (arr2[i] == newArr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[index] = arr2[i];
            index++;
        }
    }

    sNew = index;

    return newArr;
}