/*
(Double pointers) Write a C++ program with a function that takes a double pointer to an integer
array and its size as arguments. The function definition header is as shown below:

void reverseArray(int** array, int size){
…
}

The function should allocate memory for a new array using the "new" operator and a double
pointer, and then fill the new array with the reverse of the original array. The original array
should not be modified. The function should also modify the size argument to be the size of the
new array.
Sample IO format of the program is as shown below:

Original array: 1 2 3 4 5
Reversed array: 5 4 3 2 1
*/

#include <iostream>
using namespace std;
void reverseArray(int** array, int size){
    int* temp = new int[size];
    for(int i = 0; i < size; i++){
        temp[i] = (*array)[size - i - 1];
    }
    delete[] *array;
    *array = temp;
    size = size;
}

int main(){
    int size = 5;
    int* array = new int[size];
    for(int i = 0; i < size; i++){
        array[i] = i + 1;
    }
    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    reverseArray(&array, size);
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
