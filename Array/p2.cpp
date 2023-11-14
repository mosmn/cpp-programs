/*
Problem: Write a C++ program to perform the following:
a. Ask user to determine the size of an array to store integer data.
b. Declare the array, based on (a) and ask user to enter the integer data.
c. Print below menu and ask user to select:
Choose an operation:
0 : Exit
1 : Print Array
2 : Reverse Array
3 : Ascending Array
4 : Descending Array
5 : Search Array
d. Perform the operation selected by the user and display the results on the screen.
e. Implement operation 1 until 5 in separate user-defined functions.
f. In operation 5, display “Negative integer” message if the value of the array element
is a negative value.

 IOFC:
      Input :
      1) size of array
      2) array elements
      3) choice

      Output:
      1) result of operation chosen

      Formula:
      1) 

      Condition:
      1) 

 IO Format :

Enter size of array: X 
Enter array elements: X X X X X X X X X X

Choose an operation:
0 : Exit
1 : Print Array
2 : Reverse Array
3 : Ascending Array
4 : Descending Array
5 : Search Array

Enter your choice: X

Result of operation X

 Variables / constants:
    1) arraySize
    2) numbers[]
    3) choice    

 Algorithm:
 
 BEGIN main()
      SET arraySize = 0, choice = 0
      SET numbers[arraySize]
      DISPLAY "Enter size of array: "
      INPUT arraySize
      DISPLAY "Enter array elements: "
      FOR i = 1 TO arraySize
          INPUT numbers[i]
      ENDFOR

      DISPLAY "Choose an operation:"
      DISPLAY "0 : Exit"
      DISPLAY "1 : Print Array"
      DISPLAY "2 : Reverse Array"
      DISPLAY "3 : Ascending Array"
      DISPLAY "4 : Descending Array"
      DISPLAY "5 : Search Array"
      DISPLAY "Enter your choice: "
      GET choice

      WHILE choice != 0
            IF choice == 1
                  CALL operation1(numbers, arraySize)
   END main()

   BEGIN printArray(numbers, arraySize)
      FOR i = 1 TO arraySize
          DISPLAY numbers[i]
      ENDFOR
   END printArray()

   BEGIN reverseArray(numbers, arraySize)
      FOR i = arraySize TO 1
          DISPLAY numbers[i]
      ENDFOR
   END reverseArray()

   BEGIN ascendingArray(numbers, arraySize)
      FOR i = 1 TO arraySize
          FOR j = i + 1 TO arraySize
              IF numbers[i] > numbers[j]
                  SET temp = numbers[i]
                  SET numbers[i] = numbers[j]
                  SET numbers[j] = temp
              ENDIF
          ENDFOR
      ENDFOR
      FOR i = 1 TO arraySize
          DISPLAY numbers[i]
      ENDFOR
   END ascendingArray()

   BEGIN descendingArray(numbers, arraySize)
      FOR i = 1 TO arraySize
          FOR j = i + 1 TO arraySize
              IF numbers[i] < numbers[j]
                  SET temp = numbers[i]
                  SET numbers[i] = numbers[j]
                  SET numbers[j] = temp
              ENDIF
          ENDFOR
      ENDFOR
      FOR i = 1 TO arraySize
          DISPLAY numbers[i]
      ENDFOR
   END descendingArray()

   BEGIN searchArray(numbers, arraySize)
      SET found = false
      DISPLAY "Enter the number to search: "
      GET number
      FOR i = 1 TO arraySize
          IF numbers[i] == number
              SET found = true
              IF number < 0
                  DISPLAY "Negative integer"
              ELSE
                  DISPLAY "Found at position: " << i
          ENDIF
      ENDFOR
      IF found == false
          DISPLAY "Number not found"
      ENDIF
   END searchArray()

 
 Test data:

 1) Enter size of array: 5
    Enter array elements: 1 2 3 4 5
    Choose an operation:
    0 : Exit
    1 : Print Array
    2 : Reverse Array
    3 : Ascending Array
    4 : Descending Array
    5 : Search Array
    Enter your choice: 1
    1 2 3 4 5
    Enter your choice: 2
      5 4 3 2 1
      Enter your choice: 3
      1 2 3 4 5
      Enter your choice: 4
      5 4 3 2 1
      Enter your choice: 5
      Enter the number to search: 3
      Found at position: 3
      Enter your choice: 0

   2) Enter size of array: 5
      Enter array elements: 1 2 3 4 5
      Choose an operation:
      0 : Exit
      1 : Print Array
      2 : Reverse Array
      3 : Ascending Array
      4 : Descending Array
      5 : Search Array
      Enter your choice: 5
      Enter the number to search: 6
      Number not found
      Enter your choice: 0
 */

#include <iostream>
using namespace std;
void printArray(int numbers[], int arraySize);
void reverseArray(int numbers[], int arraySize);
void ascendingArray(int numbers[], int arraySize);
void descendingArray(int numbers[], int arraySize);
void searchArray(int numbers[], int arraySize);

int main()
{
      int arraySize = 0, choice = 0;
      int numbers[arraySize];

      cout << "Enter size of array: ";
      cin >> arraySize;
      
      cout << "Enter array elements: " << endl;
      for (int i = 1; i <= arraySize; i++)
      {
         cin >> numbers[i];
      }
   
      cout << "Choose an operation:" << endl;
      cout << "0 : Exit" << endl;
      cout << "1 : Print Array" << endl;
      cout << "2 : Reverse Array" << endl;
      cout << "3 : Ascending Array" << endl;
      cout << "4 : Descending Array" << endl;
      cout << "5 : Search Array" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
   
      while (choice != 0)
      {
         if (choice == 1)
         {
               printArray(numbers, arraySize);
         }
         else if (choice == 2)
         {
               reverseArray(numbers, arraySize);
         }
         else if (choice == 3)
         {
               ascendingArray(numbers, arraySize);
         }
         else if (choice == 4)
         {
               descendingArray(numbers, arraySize);
         }
         else if (choice == 5)
         {
               searchArray(numbers, arraySize);
         }
         else
         {
               cout << "Invalid choice" << endl;
         }
         cout << "\nEnter your choice: ";
         cin >> choice;
      }
   
   return 0;
}

void printArray(int numbers[], int arraySize)
{
   for (int i = 1; i <= arraySize; i++)
   {
      cout << numbers[i] << " ";
   }
}

void reverseArray(int numbers[], int arraySize)
{
   for (int i = arraySize; i >= 1; i--)
   {
      cout << numbers[i] << " ";
   }
}

void ascendingArray(int numbers[], int arraySize)
{
   int temp;
   for (int i = 1; i <= arraySize; i++)
   {
      for (int j = i + 1; j <= arraySize; j++)
      {
         if (numbers[i] > numbers[j])
         {
            temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
         }
      }
   }
   for (int i = 1; i <= arraySize; i++)
   {
      cout << numbers[i] << " ";
   }
}

void descendingArray(int numbers[], int arraySize)
{
   int temp;
   for (int i = 1; i <= arraySize; i++)
   {
      for (int j = i + 1; j <= arraySize; j++)
      {
         if (numbers[i] < numbers[j])
         {
            temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
         }
      }
   }
   for (int i = 1; i <= arraySize; i++)
   {
      cout << numbers[i] << " ";
   }
}

void searchArray(int numbers[], int arraySize)
{
   bool found = false;
   int number;
   cout << "Enter the number to search: ";
   cin >> number;
   for (int i = 1; i <= arraySize; i++)
   {
      if (numbers[i] == number)
      {
         found = true;
         if (number < 0)
         {
            cout << "Negative integer" << endl;
         }
         else
         {
            cout << "Found at position: " << i << endl;
         }
      }
   }
   if (found == false)
   {
      cout << "Number not found" << endl;
   }
}