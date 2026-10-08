#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;
    node *previous;
};

int main(){
    node *n1, *n2, *n3;

    n1 = new node;
    n2 = new node;
    n3 = new node;

    n1 -> data = 10;
    n2 -> data = 20;
    n3 -> data = 30;

    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = nullptr;

    n1 -> previous = nullptr;
    n2 -> previous = n1;
    n3 -> previous = n2;

    node *head;
    head = n1;
    node *tail;
    tail = n3;
    node *ptr;
    ptr = head;

    while(ptr!=nullptr){
        cout<<ptr->data<<endl;

        ptr = ptr -> next;
    }

    cout<<endl;

    ptr = tail;

    while(ptr!=nullptr){
        cout<<ptr->data<<endl;

        ptr = ptr -> previous;
    } 

    cout<<endl;


};