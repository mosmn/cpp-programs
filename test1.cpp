#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;

    // Accept five integer values from the user
    cout << "Enter five integer values:" << endl;
    for (int i = 0; i < 5; ++i) {
        int value;
        cin >> value;
        myQueue.push(value);
    }

    // Display total data in the queue
    cout << "Total data in the queue: " << myQueue.size() << endl;

    // Remove data one by one until the queue is empty
    cout << "Data in the queue before removal:" << endl;
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    return 0;
}
