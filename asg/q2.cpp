/*
Question 2:
+---------------------------------------+------------+
|                    Name               |     ID     |
+ ------------------------------------- +------------+
| MOHAMED AHMED MOHAMED OSMAN           | SW01082449 |
| Mufleh Tareq Ali Sagheer              | SN01082132 |
| MOHAMED ISSAM                         | CS01082609 |
| ZRIYAB ABUBAKER MUSTAFA MOHAMED ALI   | SW01082419 |
+---------------------------------------+------------+

Question 2
From your work in Question 1, using the same scenario, convert the programming technique
from using just a structure to using class and object. In this question, you are REQUIRED to
include the following:
• Class
• Private data members
• Object array
• Constructor
• At least FOUR (4) user-defined functions to processed the data. Compulsory to have
private and public functions
• Output formatting using input/ output manipulation
*/

#include <iostream>  
#include <iomanip>
#include <string>
using namespace std;

class Member {
private:
    string name;
    string dateJoined;
    float weight;
    int height;
    float bmi;

public:
    Member(string name, string dateJoined, float weight, int height, float bmi) {
        this->name = name;
        this->dateJoined = dateJoined;
        this->weight = weight;
        this->height = height;
        this->bmi = bmi;
    }

    string getName() {
        return name;
    }

    float getWeight() {
        return weight;
    }

    int getHeight() {
        return height;
    }

    float getBMI() {
        return bmi;
    }
};

void calculateHighestWeight(Member members[], int size) {
    float highestWeight = members[0].getWeight();

    for (int i = 1; i < size; i++) {
        if (members[i].getWeight() > highestWeight) {
            highestWeight = members[i].getWeight();
        }
    }

    cout << setw(30) << left << "Highest weight: " << right << highestWeight << " kg" << endl;
}

void calculateLowestWeight(Member members[], int size) {
    // Similar to calculateHighestWeight()
}

void calculateHighestBMI(Member members[], int size) {
    // Similar to calculateHighestWeight()
}   

void calculateLowestBMI(Member members[], int size) {
    // Similar to calculateHighestWeight()
}   

void calculateAverages(Member members[], int size) {
    float totalWeight = 0;
    float totalHeight = 0;
    float totalBMI = 0;

    for (int i = 0; i < size; i++) {
        totalWeight += members[i].getWeight();
        totalHeight += members[i].getHeight();
        totalBMI += members[i].getBMI();
    }

    cout << setw(30) << left << "Average weight: " << right << totalWeight / size << " kg" << endl;
    cout << setw(30) << left << "Average height: " << right << totalHeight / size << " cm" << endl; 
    cout << setw(30) << left << "Average BMI: " << right << totalBMI / size << endl;
}

int main() {
    // Similar to Question 1
}