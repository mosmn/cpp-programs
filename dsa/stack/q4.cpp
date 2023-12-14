/*Subject code : CSEB3213 Data Structure & Algorithms
Section        : 01B
Student name   : Mohamed Ahmed Mohamed Osman
Student ID no  : SW01082449
Question no    : 4 */

#include<iostream>
#include<string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

void push(Node **h, char val) {
    Node* n = new Node;
    n->data = val;
    n->next = *h;
    *h = n;
}

char pop(Node **h) {
    if (*h == NULL) {
        cerr << "Error: Stack is empty." << endl;
        return '\0';
    }
    Node* temp = *h;
    char val = temp->data;
    *h = temp->next;
    delete temp;
    return val;
}

char peek(Node *top) {
    if (top == NULL) {
        cerr << "Error: Stack is empty." << endl;
        return '\0';
    }
    return top->data;
}

bool isEmpty(Node *top) {
    return top == NULL;
}

string display(Node *h) {
    string word;
    while (h != NULL) {
        word = h->data + word;
        h = h->next;
    }
    return word;
}

string reverse(Node *h) {
    string word;
    while (h != NULL) {
        word += h->data;
        h = h->next;
    }
    return word;
}

void checker(Node *h) {
    if (display(h) == reverse(h)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    Node *head = NULL;
    int size;
    char letter;

    cout << ":: Palindrome Program ::" << endl << endl;

    cout << "Enter total value to insert: ";
    cin >> size;

    cout << "Enter characters: ";
    for (int i = 1; i <= size; i++) {
        cin >> letter;
        push(&head, letter);
    }

    cout << "Your word: " << display(head) << endl;
    cout << "Reversed word: " << reverse(head) << endl;
    cout << "Palindrome: ";
    checker(head);

    cout << "\n\nThank you for using this program";
    return 0;
}
