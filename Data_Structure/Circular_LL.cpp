#include <iostream>
using namespace std;

class node{
    int data;
    node *next;
};

int main(){
   node *n1, *n2, *n3;

   n1 = new node;
   n2 = new node;
   n3 = new node;

   n1->data = 236;
   n2->data = 334;
   n3->data = 445;

   n1->next = n2;
   n2->next = n3;
   n3->next = nullptr;

   

}