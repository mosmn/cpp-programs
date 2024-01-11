#include <iostream>

using namespace std;

struct Record {
    string owner;
    string plateNo;
    Record *next;
};

void carInput(Record **h, Record **t) {
    char choice;
    
    do {
        Record *n = new Record;
        cout << "Owner: ";
        cin >> n->owner;
        cout << "Plate No: ";
        cin >> n->plateNo;
        n->next = NULL;

        if (*h == NULL) {
            *h = n;
            *t = n;
        } else {
            (*t)->next = n;
            *t = n;
        }

        cout << "Add another car? (y/n): ";
        cin >> choice;
    } while (choice == 'y');
        
}

void display(Record *h) {
    Record *temp = h;
    cout << "\nList of cars: \n";
    for (int i = 0; temp != NULL; i++) {
        cout << "Car " << i << endl;
        cout << "Owner: " << temp->owner << endl;
        cout << "Plate No: " << temp->plateNo << endl;
        temp = temp->next;
    }
}

void serviceCar(Record *h){
    Record *temp = h;
    string plateNo;
    char choice;
    int count = 0;
    const int service_time = 45;
    
    cout << "Would you like to check queue status [Press Y for yes]: ";
    cin >> choice;
    while (choice == 'Y' || choice == 'y') {
        temp = h;
        count = 0;
        cout << "Enter plate number: ";
        cin >> plateNo;
        
        while (temp->plateNo != plateNo && temp != NULL) {
            temp = temp->next;
            count++;
        }

        cout << "There is (" << count << ") car in queue before your turn. Estimated waiting time in queue: " << count * service_time << " minutes." << endl;
        cout << "Would you like to check queue status [Press Y for yes]: ";
        cin >> choice;
    }
}

int main()
{   
    Record *head = NULL, *tail = NULL;
    carInput(&head, &tail);
    display(head);
    serviceCar(head);
    return 0;
}
