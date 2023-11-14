#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Member {
    string name;
    string dateJoined;
    float weight;
    int height;
    float bmi;
};

float calculateHighestWeight(Member members[], int size);
float calculateLowestWeight(Member members[], int size);
float calculateHighestBMI(Member members[], int size);
float calculateLowestBMI(Member members[], int size);
void calculateAverages(Member members[], int size);

int main() {
    Member gymMembers[5] = {
        {"John Smith", "01/01/2023", 80, 180, 24.7},
        {"Sarah Lee", "02/01/2023", 65, 165, 23.9},
        {"Mike Chen", "03/01/2023", 90, 175, 29.4},
        {"Amy Wang", "04/01/2023", 75, 170, 25.95},
        {"Tom Brown", "05/01/2023", 85, 185, 24.8}
    };

    cout << "+-------------------------------------+" << endl
        << setw(30) << right << "My Gym Members Report" << endl
        << "+-------------------------------------+" << endl;

    cout << setw(30) << left << "Highest weight: " << right << calculateHighestWeight(gymMembers, 5) << " kg" << endl;
    cout << setw(30) << left << "Lowest weight: " << right << calculateLowestWeight(gymMembers, 5) << " kg" << endl;
    cout << fixed << setprecision(1);
    cout << setw(30) << left << "Highest BMI: " << right << calculateHighestBMI(gymMembers, 5) << endl;
    cout << setw(30) << left << "Lowest BMI: " << right << calculateLowestBMI(gymMembers, 5) << endl;
    cout << endl;
    calculateAverages(gymMembers, 5);
    cout << "+-------------------------------------+";

    return 0;
}

float calculateHighestWeight(Member members[], int size) {
    float highestWeight = members[0].weight;

    for (int i = 1; i < size; i++) {
        if (members[i].weight > highestWeight) {
            highestWeight = members[i].weight;
        }
    }

    return highestWeight;
}

float calculateLowestWeight(Member members[], int size) {
    float lowestWeight = members[0].weight;

    for (int i = 1; i < size; i++) {
        if (members[i].weight < lowestWeight) {
            lowestWeight = members[i].weight;
        }
    }

    return lowestWeight;
}

float calculateHighestBMI(Member members[], int size) {
    float highestBMI = members[0].bmi;

    for (int i = 1; i < size; i++) {
        if (members[i].bmi > highestBMI) {
            highestBMI = members[i].bmi;
        }
    }

    return highestBMI;
}

float calculateLowestBMI(Member members[], int size) {
    float lowestBMI = members[0].bmi;

    for (int i = 1; i < size; i++) {
        if (members[i].bmi < lowestBMI) {
            lowestBMI = members[i].bmi;
        }
    }

    return lowestBMI;
}

void calculateAverages(Member members[], int size) {
    float totalWeight = 0;
    float totalHeight = 0;
    float totalBMI = 0;

    for (int i = 0; i < size; i++) {
        totalWeight += members[i].weight;
        totalHeight += members[i].height;
        totalBMI += members[i].bmi;
    }

    cout << fixed << setprecision(1);
    cout << setw(30) << left << "Average weight: " << right << totalWeight / size << " kg" << endl;
    cout << setw(30) << left << "Average height: " << right << totalHeight / size << " cm" << endl;
    cout << setprecision(2) << setw(30) << left << "Average BMI: " << right << totalBMI / size << endl;
}

