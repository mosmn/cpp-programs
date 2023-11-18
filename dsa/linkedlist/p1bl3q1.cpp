#include <iostream>

using namespace std;



class Grade {

public:

    float mark = 0.0;
    Grade *next= NULL;
    Grade *prev= NULL;
};

Grade *createNode() {

    Grade *n = new Grade ();

    cout<<"Enter Mark : ";
    cin >> n->mark;

    return n;
}

void insertNode(Grade **h) {

    Grade *n;
    char choice;

    do{

        n = createNode();



        //insert first node into linked list
        if(*h == NULL)
            *h = n;

        //insert second node onwards at the end of linked list

        else {
            Grade *p = *h;
            while(p->next != NULL) {
                p = p->next;
            }
            p->next = n;
            n->prev = p;
        }

        cout<<"Press [y] for new record:";

        cin>>choice;

    }while(choice=='y');

}

void display(Grade *h) {

    cout<<"All records  : ";
    Grade *p = h;
    while(p != nullptr){
        cout<<p->mark<<" ";
        p = p->next;
    }
    cout<<endl;
}

void deleteNode(Grade **h) {

    Grade *p = *h;
    float pos;

    cout<<"Which mark to delete?";
    display(*h);

    cout<<"Enter mark to delete : ";
    cin>>pos;

    if(pos == (*h)->mark) {
        *h = p->next;
        (*h)->prev = NULL;
        free(p);
    }
    else {
        while (pos != p->mark) {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next != NULL)
            p->next->prev = p->prev;
        free(p);
    }
}

int main() {

    Grade *head = NULL;

    insertNode(&head);

    display(head);

    deleteNode(&head);

    display(head);
    return 0;

}