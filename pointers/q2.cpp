/*
(Pointer and function) Write a C++ program to input marks, sort and display the sorted marks.
Use the following function definition header:
void FillArray (int *aPtr, int i); // to input marks into a 1D array
void SortArray(int *bPtr, int j); // to sort the array elements in ascending order
void PrintArray (int *cPtr, int k); //to print the array elements
You may use below sample IO:

Enter 5 marks: 45 66 12 34 55
Marks in ascending order = 12 34 45 55 66
*/


#include <iostream>
using namespace std;
void FillArray (int *aPtr, int i); // to input marks into a 1D array
void SortArray(int *bPtr, int j); // to sort the array elements in ascending order
void PrintArray (int *cPtr, int k); //to print the array elements

int main() {
    int marks[5];
    FillArray(marks, 5);
    SortArray(marks, 5);
    PrintArray(marks, 5);
    return 0;
}

void FillArray (int *aPtr, int i){
    cout << "enter 5 nums:";
    for(int j=0; j<i; j++){
        cin >> *(aPtr+j);
    }
}; // to input marks into a 1D array

void SortArray(int *bPtr, int j){
    for(int i=0; i<j; i++){
        for(int k=i+1; k<j; k++){
            if(*(bPtr+i) > *(bPtr+k)){
                int temp = *(bPtr+i);
                *(bPtr+i) = *(bPtr+k);
                *(bPtr+k) = temp;
            }
        }
    } // this is bubble sort
}; // to sort the array elements in ascending order

void PrintArray (int *cPtr, int k){
    cout << "Marks in ascending order = ";
    for(int i=0; i<k; i++){
        cout << *(cPtr+i) << " ";
    }
}; //to print the array elements
