/*Subject code : CSEB3213 Data Structure & Algorithms
Section        : 01B
Student name   : Mohamed Ahmed Mohamed Osman
Student ID no  : SW01082449
Question no    : 1 */

#include<iostream> 
using namespace std; 

struct Data{ 

    int no; 

    Data *next; 

}; 

 

void push(Data **head, int val){ 

    Data *n = new Data; 

    n->no = val; 

    n->next = *head;

    *head = n;
    /*insertion process*/

} 

     

void analysis(Data *head){ 

    Data *temp = head;
    int totalEven = 0, totalOdd = 0;

    for(int i = 1; temp != NULL; i++){ 
        if(temp->no % 2 == 0){
            cout<<"Value "<< i <<": "<<temp->no<<" (Even)"<<endl;
            totalEven++;
        }else{
            cout<<"Value "<< i <<": "<<temp->no<< "(Odd)"<<endl;
            totalOdd++;
        }
        temp = temp->next;
    }

    cout<<"Total even numbers: "<<totalEven<<endl;
    cout<<"Total odd numbers: "<<totalOdd<<endl;
} 
 

void pop(Data **head){ 

    Data *temp = *head; 

    while(temp != NULL){ 

        cout<<temp->no<<" is removed"<<endl;

        *head = temp->next; 

        free(temp);

        temp = *head;
    }
}

 

int main() { 

    Data *head = NULL; int size; int val; 

 

    cout<<"Enter total value to insert: "; 

    cin>> size; 

    for(int i = 1; i<=size; i++){ 

        cout<<"Enter a value : "; 

        cin>>val; 

 

        push(&head, val);
    } 

    cout<< endl<<":: Analysis ::"<< endl;
    analysis(head);

     cout<<"Remove all elements from the stack: "<< endl;
     pop(&head);     

    cout<<"\nEnd of program"; 

    return 0; 

} 

 