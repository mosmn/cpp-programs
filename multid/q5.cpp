/*
Write a C++ program to store in a 2-D array daily rainwater collection data in a week of 4
locations in the country. Then display the data in the following format:

Location 1, Day 1 = x.xx ml
Location 1, Day 2 = x.xx ml
Location 1, Day 3 = x.xx ml
Location 1, Day 4 = x.xx ml
Location 1, Day 5 = x.xx ml
Location 1, Day 6 = x.xx ml
Location 1, Day 7 = x.xx ml
…
Location 4, Day 1 = x.xx ml
Location 4, Day 2 = x.xx ml
Location 4, Day 3 = x.xx ml
Location 4, Day 4 = x.xx ml
Location 4, Day 5 = x.xx ml
Location 4, Day 6 = x.xx ml
Location 4, Day 7 = x.xx ml
*/

#include <iostream>
#include <iomanip>
#define LOCATIONS 4
#define DAYS 7
using namespace std;

int main() {
    double rainwaterData[LOCATIONS][DAYS];

    for(int i = 0; i < LOCATIONS; i++) {
        cout << "Enter data for location " << i+1 << ":" << endl;
        for(int j = 0; j < DAYS; j++){
            cout << "Day " << j+1 << ": ";
            cin >> rainwaterData[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < LOCATIONS; i++) {
        for(int j = 0; j < DAYS; j++){
            cout << "Location " << i+1 << ", " << "Day " << j+1 << " = " << fixed << setprecision(2) << rainwaterData[i][j] << " ml" << endl;
        }
        cout << endl;
    }
}