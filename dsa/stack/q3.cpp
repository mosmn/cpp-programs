/*Subject code : CSEB3213 Data Structure & Algorithms
Section        : 01B
Student name   : Mohamed Ahmed Mohamed Osman
Student ID no  : SW01082449
Question no    : 3 */

#include<iostream>
#include <stack>
using namespace std; 
     

string display(stack<char> s){
    stack<char> temp;
    string word;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()){
        word += temp.top();
        temp.pop();
    }
    return word;
}
 

string reverse(stack<char> s){
    string word;
    for(int i = 1; !s.empty(); i++){ 
        word += s.top();
        s.pop();
    }

    return word;
}

void checker(stack<char> s){
    if(display(s) == reverse(s)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

int main() { 

    stack<char>word; int size; char letter;

    cout<<":: Palindrome Program ::"<<endl<<endl;

    cout<<"Enter total character: ";

    cin>> size; 

    cout<<"Enter characters: ";
    for(int i = 1; i<=size; i++){ 
        cin>>letter;

        word.push(letter);
    }
    
    cout << "Your word: ";
    cout << display(word);

    cout << "\nReversed word: ";
    cout << reverse(word);

    cout << "\nPalindrome: ";
    checker(word);

    cout<<"\n\nThank you for using this program";

    return 0; 

} 
