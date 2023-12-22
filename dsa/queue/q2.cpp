#include<iostream>
#include<queue>
using namespace std;

void analysis(queue<int> q){
    int totalEven = 0, totalOdd = 0;
    int i = 1;
    while(!q.empty()) {
        if(q.front() % 2 == 0){
            cout<<"Value "<< i <<": "<<q.front()<<" (Even)"<<endl;
            totalEven++;
        }else{
            cout<<"Value "<< i <<": "<<q.front()<< "(Odd)"<<endl;
            totalOdd++;
        }
        q.pop();
        i++;
    }

    cout<<"Total even numbers: "<<totalEven<<endl;
    cout<<"Total odd numbers: "<<totalOdd<<endl;
}

int main() { 
    queue<int> q; 
    int size; 
    int val; 
    int totalEven = 0, totalOdd = 0;

    cout<<"Enter total value to insert: "; 
    cin>> size; 

    for(int i = 1; i<=size; i++){ 
        cout<<"Enter a value : "; 
        cin>>val; 
        q.push(val);
    } 

    cout<< endl<<":: Analysis ::"<< endl;
    analysis(q);

    cout<<"\nRemove all elements from the queue: "<< endl;
    while(!q.empty()) {
        cout<<q.front()<<" is removed"<<endl;
        q.pop();
    }

    cout<<"\nEnd of program"; 
    return 0; 
}