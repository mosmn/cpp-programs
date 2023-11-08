#include <iostream> 

using namespace std; 

 

struct Subject { 

//Question 2(1)
    string sname;
    string scode;
    string remark = "Normal";
    int credit;
    float fee;
    Subject *next;
}; 

 

int menu() { 

int choice; 

cout << "::SUBJECT REGISTRATION::\n"; 

cout << "1. Add subject\n"; 	 

cout << "2. Display subject\n"; 

cout << "3. Update subject\n"; 

cout << "4. Exit program\n"; 

cout << "Enter choice: "; 

cin >> choice; 

return choice; 

} 

 

Subject *subjectInfo() { 

//Question 2(2) 

//create a new node 
Subject *n = new Subject();

//accept user’s data inputs
    cout<<"Enter subject name : ";
    cin>>n->sname;
    cout<<"Enter subject code : ";
    cin>>n->scode;
    cout<<"Enter subject credit : ";
    cin>>n->credit;

    n->fee = n->credit * 500;

    cout<<"Is this a late registration? (Y/N) : ";
    char choice;
    cin>>choice;
    if(choice == 'Y' || choice == 'y'){
        n->fee += 100;
        n->remark = "Late Registration";
    }

//return address of new node to registerSubject() 
    return n;

} 

 

void registerSubject(Subject **h){ 

       //Question 2(3) 

    cout<<":: Add Subject Record::"<<endl; 

//invoke subjectInfo () and accept new node’s address 
    Subject *n = subjectInfo();

//add new node to linked list 
     if(*h == NULL){
         *h = n;
         n->next = NULL;
     }
     else { 
         Subject *p = *h;
            while(p->next != NULL){
                p = p->next;
            }

            p->next = n;
     }
} 

 

void display(Subject *h) { 

       //Question 2(4) 
       char choice;

       cout<<":: Display Subject Record::"<<endl; 

       cout<<"Press [1] for individual subject or [2] for all subject : "; 

       cin>>choice; 

       switch(choice) { 

              case '1':{
                string code;
                cout<<"Enter subject code : ";
                cin>>code;

                Subject *p = h;
                while(p != NULL){
                    if(p->scode == code){
                        cout<<"Subject Name : "<<p->sname<<endl;
                        cout<<"Subject Code : "<<p->scode<<endl;
                        cout<<"Subject Credit : "<<p->credit<<endl;
                        cout<<"Subject Fee : "<<p->fee<<endl;
                        cout<<"Subject Remark : "<<p->remark<<endl;
                    }
                    p = p->next;
                }
                break;
              }

              case '2': {//display all subject records 
                Subject *q = h;
                while(q != NULL){
                    cout<<"Subject Name : "<<q->sname<<endl;
                    cout<<"Subject Code : "<<q->scode<<endl;
                    cout<<"Subject Credit : "<<q->credit<<endl;
                    cout<<"Subject Fee : "<<q->fee<<endl;
                    cout<<"Subject Remark : "<<q->remark<<endl;
                    q = q->next;
                }
                break;
              }

       }
       //display record according to user’s input (option) 

} 

 

void update(Subject *h) { 

       //Question 3 

       cout<<":: Update Subject Credit ::"<<endl; 

       //update subject credit and recalculate the fee according to user’s input
       string code;
       cout<<"Enter subject code : ";
       cin>>code;

       Subject *p = h;
         while(p != NULL){
              if(p->scode == code){
                cout<<"Enter new subject credit : ";
                cin>>p->credit;
                p->fee = p->credit * 500;
                cout<<"Subject Fee : "<<p->fee<<endl;
              }
              p = p->next;
         }

} 

 

int main() { 

//declaration of variables 
Subject *h = NULL;
string name, idNo;
int choice;

cout<<"Enter student name : "; 

getline(cin, name); 

cout<<"Enter student ID no : "; 

getline(cin, idNo); 

do { 

     choice = menu(); 

            switch (choice) { 

               case 1: registerSubject(&h);
                break;
               case 2: display(h);
                break;
               case 3: update(h);
                break;
} 

} while (choice != 4); 

return 0; 

} 

 