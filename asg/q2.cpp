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

        float calculateBMI() {
            float heightInMeters = height / 100.0;
            return weight / (heightInMeters * heightInMeters);
        }
    public:
        Member(string name, string dateJoined, float weight, int height) {
            this->name = name;
            this->dateJoined = dateJoined;
            this->weight = weight;
            this->height = height;
            bmi = calculateBMI();
            // When local variable’s name is same as member’s name (shadowing) use this-> to refer to the member, since the member is hidden by the local variable.
            // alternatively, you can use a different name for the local variable. e.g.:
            // Member(string n, string d, float w, int h) {
            //     name = n;
            //     dateJoined = d;
            //     weight = w;
            //     height = h;
            //     bmi = calculateBMI();
            // }
        }

        string getName() {
            return name;
        }

        string getDateJoined() {
            return dateJoined;
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

        void setName(string name) {
            this->name = name;
        }

        void setDateJoined(string dateJoined) {
            this->dateJoined = dateJoined;
        }

        void setWeight(float weight) {
            this->weight = weight;
            this->bmi = calculateBMI();
        }

        void setHeight(int height) {
            this->height = height;
            this->bmi = calculateBMI();
        }
};

float calculateHighestWeight(Member members[], int size);
float calculateLowestWeight(Member members[], int size);
float calculateHighestBMI(Member members[], int size);
float calculateLowestBMI(Member members[], int size);
void calculateAverages(Member members[], int size);

int main() {
    Member gymMembers[5] = {
        Member("John Smith", "01/01/2023", 80, 180),
        Member("Sarah Lee", "02/01/2023", 65, 165),
        Member("Mike Chen", "03/01/2023", 90, 175),
        Member("Amy Wang", "04/01/2023", 75, 170),
        Member("Tom Brown", "05/01/2023", 85, 185)
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
    float highestWeight = members[0].getWeight();

    for (int i = 1; i < size; i++) {
        if (members[i].getWeight() > highestWeight) {
            highestWeight = members[i].getWeight();
        }
    }

    return highestWeight;
}

float calculateLowestWeight(Member members[], int size) {
    float lowestWeight = members[0].getWeight();

    for (int i = 1; i < size; i++) {
        if (members[i].getWeight() < lowestWeight) {
            lowestWeight = members[i].getWeight();
        }
    }

    return lowestWeight;
}

float calculateHighestBMI(Member members[], int size) {
    float highestBMI = members[0].getBMI();

    for (int i = 1; i < size; i++) {
        if (members[i].getBMI() > highestBMI) {
            highestBMI = members[i].getBMI();
        }
    }

    return highestBMI;
}

float calculateLowestBMI(Member members[], int size) {
    float lowestBMI = members[0].getBMI();

    for (int i = 1; i < size; i++) {
        if (members[i].getBMI() < lowestBMI) {
            lowestBMI = members[i].getBMI();
        }
    }

    return lowestBMI;
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

    cout << fixed << setprecision(1);
    cout << setw(30) << left << "Average weight: " << right << totalWeight / size << " kg" << endl;
    cout << setw(30) << left << "Average height: " << right << totalHeight / size << " cm" << endl;
    cout << setprecision(2) << setw(30) << left << "Average BMI: " << right << totalBMI / size << endl;
}
