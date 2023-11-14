/*
Problem: Write a C++ program that will prompt the user to input lab score and final score of 20 students. Then the program should be able to find the average lab score and highest score as well as to print them on the screen. Implement the tasks in separate functions as follows: 
 • readInput() – read input from user 
 • findAverage() – compute the average lab score of all students 
 • findHighest() – compute the highest score of all students 
 • displayOP() – to display the average lab score and highest score on the screen. 
*/ 

#include <iostream>
using namespace std;
void readInput(float ls[], float fs[]);
float findAverage(float x[]);
float findHighest(float y[]);
void displayOP(float a, float h);

int main() {
    float labScore[20], finalScore[20], average, highest;

    readInput(labScore, finalScore);
    average = findAverage(labScore);
    highest = findHighest(finalScore);
    displayOP(average, highest);

    return 0;
}

void readInput(float ls[], float fs[]) {
    for (int i = 0; i < 20; i++) {
        cout << "Enter lab score for student " << i + 1 << ": ";
        cin >> ls[i];
        cout << "Enter final score for student " << i + 1 << ": ";
        cin >> fs[i];
        cout << "\n";
    }
}

float findAverage(float x[]) {
    float sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += x[i];
    }
    return sum / 20;
}

float findHighest(float y[]) {
    float highest = 0;
    for (int i = 0; i < 20; i++) {
        if (y[i] > highest) {
            highest = y[i];
        }
    }
    return highest;
}

void displayOP(float a, float h) {
    cout << "\nAverage lab score: " << a << endl;
    cout << "Highest score: " << h << endl;
}
