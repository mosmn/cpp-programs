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
        {1,1,1,1,0,0,1,1,1,1},
        {1,0,1,1,1,1,1,1,0,0},
        {1,1,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,0,1,1,0},
        {1,1,0,1,1,1,0,1,1,1},
    };

    int trainee1 = 0, trainee2 = 0, trainee3 = 0, trainee4 = 0, trainee5 = 0;

    for(int i = 0; i < TRAINEES; i++){
        for(int j = 0; j < DAYS; j++){
            if(attendance[i][j] == 1){
                if(i == 0)
                trainee1++;
                if(i == 1)
                trainee2++;
                if(i == 2)
                trainee3++;
                if(i == 3)
                trainee4++;
                if(i == 4)
                trainee5++;
            }
        }
    }

    int highest = trainee1;
    if (trainee2 > highest)
        highest = trainee2;
    if (trainee3 > highest)
        highest = trainee3;
    if (trainee4 > highest)
        highest = trainee4;
    if (trainee4 > highest)
        highest = trainee4;
    if (trainee5 > highest)
        highest = trainee5;
    

    cout << "Trainee 1 attendence: "<< trainee1 << endl;
    cout << "Trainee 2 attendence: "<< trainee2 << endl;
    cout << "Trainee 3 attendence: "<< trainee3 << endl;
    cout << "Trainee 4 attendence: "<< trainee4 << endl;
    cout << "Trainee 5 attendence: "<< trainee5 << endl << endl;
    cout <<"highest: "<< highest;
}