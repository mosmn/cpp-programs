#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> bubbleSort(vector<int> inputArr);
int searchArray(vector<int> inputArr, int searchValue);
int searchArray(vector<int> inputArr, int searchValue, int left, int right);
bool isSorted(vector<int> inputArr);

int main() {
    int arr[] = {3, 6, 2, 4};
    vector<int> inputArr(arr, arr + 4);
    int searchValue = 4;
    int index = searchArray(inputArr, searchValue);
    cout << index << endl;

    int arr2[] = {1, 5, 8, 9, 10};
    vector<int> inputArr2(arr2, arr2 + 5);
    searchValue = 5;
    index = searchArray(inputArr2, searchValue);
    cout << index << endl;

    return 0;
}

vector<int> bubbleSort(vector<int> inputArr) {
    int n = inputArr.size();
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (inputArr[j] > inputArr[j+1]) {
                temp = inputArr[j];
                inputArr[j] = inputArr[j+1];
                inputArr[j+1] = temp;
            }
        }
    }
    return inputArr;
}

int searchArray(vector<int> inputArr, int searchValue) {
    if (!isSorted(inputArr)) {
        inputArr = bubbleSort(inputArr);
    }
    return searchArray(inputArr, searchValue, 0, inputArr.size()-1);
}

int searchArray(vector<int> inputArr, int searchValue, int left, int right) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (inputArr[mid] == searchValue) {
        return mid;
    } else if (inputArr[mid] > searchValue) {
        return searchArray(inputArr, searchValue, left, mid-1);
    } else {
        return searchArray(inputArr, searchValue, mid+1, right);
    }
}

bool isSorted(vector<int> inputArr) {
    for (int i = 0; i < inputArr.size()-1; i++) {
        if (inputArr[i] > inputArr[i+1]) {
            return false;
        }
    }
    return true;
}


