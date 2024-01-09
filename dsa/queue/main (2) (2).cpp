#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct order {
    string customer;
    float price;
    int id;
};

//Question (2)
void insert(queue<order>& rec, string cust[], float price[], int id[], int size) {
    for(int i = 0; i < size; i++) {
        order r;
        r.customer = cust[i];
        r.price = price[i];
        r.id = id[i];
        rec.push(r);
    }
}


//Question (3)
void update(queue<order>& rec, string n){
    queue<order> temp = rec;
    char choice;
    int count = 0;
    
    while(n != temp.front().customer){
        temp.pop();
        count++;
    }
    
    if(rec.front().customer != n){
        cout << "\n You need to requeue the first " << count << "record(s)\n";
        cout << "Press y: ";
        cin >> choice;
        
        while(rec.front().customer != n){
        order temp = rec.front();
        rec.pop();
        rec.push(temp);
        }
        
    }
    
    cout << "\nNew order completed: \n";
    cout << "Order ID: " << rec.front().id << ", Customer Name: " << rec.front().customer << ", Payment: " << rec.front().price << endl;
    rec.pop();
    
    
}
 
// Question (4)
void display(queue<order> rec) {
    int i = 1;
    while(!rec.empty()) {
        order r = rec.front();
        rec.pop();
        cout << i << ". Order ID: " << r.id << ", Customer Name: " << r.customer << ", Payment: " << r.price << endl;
        i++;
    }
}
        
int main() {
    string customer [] = {"Ahmad","Siew May","Ravi","John","Mohammad"};
    float price [] = {120.50, 148.70, 160.20, 155.60, 114.90, 110.20};
    int ID [] = {111,114,112,117,116,135};
    queue<order> record; 
    string name;

    //Question (1)

    insert(record, customer, price, ID, 5);
    cout<<"\n List of Order Queue"<<endl;
    display(record);
    cout<<"\n # Menu : Update Order Queue# "<<endl;
    cout<<" Enter customer name for order completion : ";
    getline(cin, name);    
    update(record, name);
    cout<<"\n # Updated List of Order Queue"<<endl;
    display(record);     
    cout<<"\nEnd of program";
    return 0;
}
