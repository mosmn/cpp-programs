#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> bubbleSort(vector<int> inputArr, string order);
void display(vector<int> inputArr);

int main() {
    int arr[] = {10, 4, 2, 8, 11, 15};
    vector<int> inputArr(arr, arr + 6);

    vector<int> outputArr = bubbleSort(inputArr, "asc");
    display(outputArr);
    cout << endl;

    outputArr = bubbleSort(inputArr, "desc");
    display(outputArr);
    cout << endl;

    return 0;
}

vector<int> bubbleSort(vector<int> inputArr, string order) {
    int n = inputArr.size();
    int temp;
    if (order == "asc") {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (inputArr[j] > inputArr[j+1]) {
                    temp = inputArr[j];
                    inputArr[j] = inputArr[j+1];
                    inputArr[j+1] = temp;
                }
            }
        }
    } else if (order == "desc") {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (inputArr[j] < inputArr[j+1]) {
                    temp = inputArr[j];
                    inputArr[j] = inputArr[j+1];
                    inputArr[j+1] = temp;
                }
            }
        }
    }
    return inputArr;
}

void display(vector<int> inputArr) {
    for (int i = 0; i < inputArr.size(); i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;
}