/*
Write a C++ program to keep below data of 10 working days attendance records(column) of 5
trainees(row):
{1,1,1,1,0,0,1,1,1,1}
{1,0,1,1,1,1,1,1,0,0}
{1,1,1,1,1,1,1,1,1,1}
{0,1,1,1,1,1,0,1,1,0}
{1,1,0,1,1,1,0,1,1,1}

Determine and display the total attendance of each trainee (row-wise) and determine and display the
trainee number with the highest number of attendances.
*/

#include <iostream>
#define TRAINEES 5
#define DAYS 10
using namespace std;

int main(){
    int attendance[TRAINEES][DAYS] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,1,1,1,1,1,1,0,0},
        {1,1,1,1,0,1,1,1,1,1},
        {0,1,1,1,1,1,0,1,1,0},
        {1,1,1,1,1,1,1,1,1,0},
    };

    int totalAttendance[TRAINEES] = {0};
    int highestAttendance = 1;

    for(int i = 0; i < TRAINEES; i++){
        for(int j = 0; j < DAYS; j++){
            totalAttendance[i] += attendance[i][j];
        }
        cout << "Trainee " << i+1 << " has " << totalAttendance[i] << " attendances." << endl;
        if(totalAttendance[highestAttendance] < totalAttendance[i]){
            highestAttendance = i;
        }
    }

    cout << endl << "Trainee with the highest number of attendances is Trainee " << highestAttendance+1 << "." << endl;

    return 0;
}