/*Subject code : CSEB3213 Data Structure & Algorithms
Section        : 01B
Student name   : Mohamed Ahmed Mohamed Osman
Student ID no  : SW01082449
Question no    : 2 */

#include<iostream> 
#include <stack>
using namespace std; 
     

void analysis(stack<int> s){
    int totalEven = 0, totalOdd = 0;
    for(int i = 1; !s.empty(); i++){ 
        if(s.top() % 2 == 0){
            cout<<"Value "<< i <<": "<<s.top()<<" (Even)"<<endl;
            totalEven++;
        }else{
            cout<<"Value "<< i <<": "<<s.top()<< "(Odd)"<<endl;
            totalOdd++;
        }
        s.pop();
    }

    cout<<"Total even numbers: "<<totalEven<<endl;
    cout<<"Total odd numbers: "<<totalOdd<<endl;
} 
 

void pop(stack<int> *no){
    while(!no->empty()){
        cout<<no->top()<<" is removed"<<endl;
        no->pop();
    }
}

 

int main() { 

    stack<int>number; int size; int val; 

 

    cout<<"Enter total value to insert: "; 

    cin>> size; 

    for(int i = 1; i<=size; i++){ 

        cout<<"Enter a value : "; 

        cin>>val; 


        number.push(val);
    } 

    cout<< endl<<":: Analysis ::"<< endl;
    analysis(number);

     cout<<"Remove all elements from the stack: "<< endl;
     pop(&number);

    cout<<"\nEnd of program"; 

    return 0; 

} 
