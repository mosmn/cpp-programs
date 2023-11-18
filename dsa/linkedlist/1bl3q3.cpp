#include <iostream>
#include <vector>

using namespace std;

struct Data {
    string name;
    float salary;
};

struct Node {
    string name;
    float salary;
    Node* next, * prev;
};

void filterRecord(Node** h, vector<Data> s) {
    cout << "\n:: Staff Record With Salary > RM5k ::" << endl;

    for (vector<Data>::iterator it = s.begin(); it != s.end(); ++it) {
        if (it->salary > 5000) {
            Node* n = new Node;
            n->name = it->name;
            n->salary = it->salary;
            n->next = nullptr;
            n->prev = nullptr;

            if (*h == nullptr) {
                *h = n;
            } else {
                Node* temp = *h;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = n;
                n->prev = temp;
            }
        }
    }
}

void display(Node* head) {
    cout << "\n:: Staff Record With Salary > RM5k ::" << endl;

    Node* temp = head;
    while (temp != nullptr) {
        cout << "Name: " << temp->name << ", Salary: " << temp->salary << endl;
        temp = temp->next;
    }
}

void removeRecord(Node** h, const string& targetName) {
    cout << "\n:: Staff Record Deletion ::" << endl;

    Node* temp = *h;
    while (temp != nullptr) {
        if (temp->name == targetName) {
            if (temp->prev != nullptr) {
                temp->prev->next = temp->next;
            } else {
                *h = temp->next;
            }

            if (temp->next != nullptr) {
                temp->next->prev = temp->prev;
            }

            free(temp);
            cout << "Record deleted successfully." << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Record not found." << endl;
}

int main() {
    vector<Data> staff = {{"Mei Ling", 12000}, {"Rajesh", 4000}, {"Husin", 7500}};
    Data temp;
    Node* head = nullptr;

    cout << ":: New Record ::" << endl;
    cout << "Name: ";
    cin >> temp.name;
    cout << "Salary: ";
    cin >> temp.salary;
    staff.push_back(temp);

    cout << "\n:: All Staff Record ::" << endl;
    for (vector<Data>::iterator it = staff.begin(); it != staff.end(); ++it) {
        cout << "Name: " << it->name << ", " << it->salary << endl;
    }

    filterRecord(&head, staff);
    display(head);

    string targetName;
    cout << "Enter staff name to delete: ";
    cin >> ws;
    getline(cin, targetName);
    removeRecord(&head, targetName);
    display(head);

    cout << "End of Program" << endl;

    return 0;
}
