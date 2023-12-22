#include<iostream> 
using namespace std; 

struct Data{ 

    int no; 

    Data *next; 

}; 

 

void enqueue(Data **head, Data **tail, int val){ 

    Data *n = new Data; 

    n->no = val; 

    n->next = NULL; 

 

    if(*head == NULL){ 

        *head = n; 

        *tail = n; 

    }else{ 

        (*tail)->next = n; 

        *tail = n; 

    } 

}

     

void analysis(Data *head){
    // Data *temp = head;
    // int totalEven = 0, totalOdd = 0;

    // for(int i = 1; temp != NULL; i++){ 
    //     if(temp->no % 2 == 0){
    //         cout<<"Value "<< i <<": "<<temp->no<<" (Even)"<<endl;
    //         totalEven++;
    //     }else{
    //         cout<<"Value "<< i <<": "<<temp->no<< "(Odd)"<<endl;
    //         totalOdd++;
    //     }
    //     temp = temp->next;
    // }

    // cout<<"Total even numbers: "<<totalEven<<endl;
    // cout<<"Total odd numbers: "<<totalOdd<<endl;

    Data *tempListh = NULL;
    Data *tempListt = NULL;

    Data *temph = head;
    while(head != NULL){
        if(temph != NULL){
            enqueue(&tempListh, &tempListt, temph->no);
            temph = temph->next;
        }
    } 

    int totalEven = 0, totalOdd = 0;
    Data *temp = tempListh;
    int i = 1;

    while(tempListh != NULL){ 
        if(tempListh->no % 2 == 0){
            cout<<"Value "<< i <<": "<<tempListh->no<<" (Even)"<<endl;
            totalEven++;
        }else{
            cout<<"Value "<< i <<": "<<tempListh->no<< "(Odd)"<<endl;
            totalOdd++;
        }
        tempListh = tempListh->next;
        free(temp);
        temp = tempListh;
        i++;
    }     

} 
 

void dequeue(Data **head){ 

    Data *temp = *head; 

    while(temp != NULL){ 

        cout<<temp->no<<" is removed"<<endl;

        *head = temp->next; 

        free(temp);

        temp = *head;
    }
}
 

int main() { 

    Data *head = NULL;
    Data *tail = NULL;
    int size; int val; 

 

    cout<<"Enter total value to insert: "; 

    cin>> size; 

    for(int i = 1; i<=size; i++){ 

        cout<<"Enter a value : "; 

        cin>>val; 

 

        enqueue(&head, &tail, val);
    } 

    cout<< endl<<":: Analysis ::"<< endl;
    analysis(head);

    cout<<"Remove all elements from the stack: "<< endl;
    dequeue(&head);    

    cout<<"\nEnd of program"; 

    return 0; 

} 

 