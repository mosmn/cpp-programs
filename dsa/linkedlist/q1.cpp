#include <iostream> 

using namespace std; 

 

class Record { 

    public: 

    int year; 

    //missing code 
    Record *next;

}; 

 

 

Record *createNode() { 

    Record *n = new Record (); 

    cout<<"Enter year : "; 

    //missing code 
    cin>>n->year;

    return n;
} 

 

 

void insertNode(Record **h) {	   

    //variable declaration
    Record *n;
    char choice;

    do{ 

        n = createNode(); 

        //insert first node into linked list

        //missing code 
        if(*h == NULL){
            *h = n;
            n->next = NULL;
        }
        //insert second node onwards at the end of linked list 
        else { 
            //missing code
            Record *p = *h;
            while(p->next != NULL){
                p = p->next;
            }
            p->next = n;
        } 

        cout<<"Press [y] for new record:"; 

        cin>>choice; 

    }while(choice=='y'); 

} 

 

void display(Record *h) { 

    cout<<"All records  : "; 

    //missing code 
    Record *p = h;
    while(p != NULL){
        cout<<p->year<<" ";
        p = p->next;
    }

    cout<<endl; 

} 

void analysis(Record *h) {
    cout<<":: Analysis ::"<<endl; 

    //missing code 
    Record *p = h;
    while(p != NULL){
        if(p->year % 4 == 0)
            if(p->year % 100 == 0)
                if(p->year % 400 == 0)
                    cout<<p->year<<" : Leap Year"<<endl;
                else
                    cout<<p->year<<" : Not a Leap Year"<<endl;
            else
                cout<<p->year<<" : Leap Year"<<endl;
        else
            cout<<p->year<<" : Not a Leap Year"<<endl;

        p = p->next;
    }
}

 

int main() { 

    Record *head = NULL; 

    insertNode(&head); 

    //call display()
    display(head); 

    //call analysis()
    analysis(head); 

    return 0; 

} 