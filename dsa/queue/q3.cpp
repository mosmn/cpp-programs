#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct record {
    string name;
    float salary;
    int service;
};

void insert(queue<record>& staff, string name[], float salary[], int service[], int size) {
    for(int i = 0; i < size; i++) {
        record r;
        r.name = name[i];
        r.salary = salary[i];
        r.service = service[i];
        staff.push(r);
    }
}

void update(queue<record>& staff) {
    string name;
    cout << "Enter name: ";
    cin >> name;
    int choice;
    cout << "Press [1] for Salary or [2] for Year of Service: ";
    cin >> choice;
    queue<record> temp;
    while(!staff.empty()) {
        record r = staff.front();
        staff.pop();
        if(r.name == name) {
            if(choice == 1) {
                cout << "Enter new salary: ";
                cin >> r.salary;
            } else if(choice == 2) {
                cout << "Enter new year of service: ";
                cin >> r.service;
            }
        }
        temp.push(r);
    }
    staff = temp;
}

void display(queue<record> staff) {
    int i = 1;
    while(!staff.empty()) {
        record r = staff.front();
        staff.pop();
        cout << i << ". Staff Name: " << r.name << ", Salary: RM " << r.salary << ", Year of Service: " << r.service << endl;
        i++;
    }
}

int main() { 
    string name [] = {"Ahmad","Siew May","Ravi","John","Mohammad","Jennifer"}; 
    float salary [] = {12000.0, 4800.0,6000.0, 5500.0, 14000.0, 11000.0}; 
    int service [] = {10,4,12,7,6,5}; 
    queue <record> staff;      

    insert(staff, name, salary, service, 6); 

    cout<<"\n # Menu : Current Record # "<<endl; 
    display(staff); 

    cout<<"\n # Menu : Update Record # "<<endl; 
    update(staff); 

    cout<<"\n # Menu : Updated Record # "<<endl; 
    display(staff);      

    cout<<"\nEnd of program"; 

    return 0; 
}