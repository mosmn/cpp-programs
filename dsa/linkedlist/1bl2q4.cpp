//suitable header(s)
#include <iostream>
#include <vector>

using namespace std;



struct Data{

    string name;

    float salary;

};



struct Node{

    string name;

    float salary;

    Node *next;

};



void filterRecord(/*suitable parameter(s)*/){



    /*this function shall copy all data from STL staff and store it in a singly

      linked list, ONLY if the value of the salary is greater than RM5000 */



}



void display(Node *head){

    cout<<"\n:: Staff Record With Salary > RM5k ::"<<endl;



    /*this function shall display all data in the singly linked list */

}



int main()

{

    vector<Data>staff = {{"Mei Ling",12000}, {"Rajesh", 4000}, {"Husin", 7500}};

    Data temp;

    /*suitable variable(s)*/



    cout<<":: New Record ::"<<endl;

    /* this section shall prompt user to input data for staff name and salary.

    Store the input data at the end of the STL staff */



    cout<<"\n:: All Staff Record ::"<<endl;

    /*this function shall display all data in the STL staff using iterator */



    filterRecord(/*suitable argument(s)*/);

    display(head);

    cout<<"End of Program";



    return 0;

}