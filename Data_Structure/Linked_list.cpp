#include <iostream>
using namespace std;

class node{
    public:
      int data;
      node *next;
};

int main(){
    node *n1, *n2, *n3;
    n1 = new node;
    n2 = new node;
    n3 = new node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;

    node *head;
    head = n1;
    node *ptr;
    ptr = head;

    while(ptr!=nullptr){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    };
    cout<<endl;

    // insert at first position

    node *newnode = new node;
    newnode->data = 500;
    newnode->next = head;
    head = newnode;
    ptr = head;

    while(ptr!= nullptr){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    };

    cout<<endl;

    // Insert at end position

   newnode = new node;
   newnode->data = 700;
   n3->next = newnode;
   newnode-> next = nullptr;
   ptr = head;

   while(ptr!=nullptr){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
   };
   cout<<endl;

   cout<<"Enter the value after that a new node is to be added"<<endl;
   int x;
   cin>>x;
   ptr = head;

   while(ptr!=nullptr){
    if(ptr->data==x)
    break;
    else{
        ptr = ptr->next;
    }
   };

   cout<<endl;

   newnode = new node;
   newnode->data=800;
   newnode->next=ptr->next;
   ptr->next = newnode;
   ptr = head;

   while(ptr!=nullptr){
    cout<<ptr->data<<endl;
    ptr= ptr->next;
   };
}