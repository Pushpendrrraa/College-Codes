#include <iostream>
using namespace std;

int s[5];
int top = -1;
void push(int x){
    if (top == 4){
        cout<<"overflow";
    }
    else{
        top = top + 1;
        s[top]=x;
    };

};

void pop(){
    if(top == -1){
        cout<<"underflow";

    }
    else{
        int y = s[top];
        top = top - 1;
        cout<<"The popped element is= "<<y;
        cout<<endl;
    };
};

main(){
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    pop();
    pop();
    pop();
    pop();
    pop();
    push(900);
    push(800);
     cout<<"The stack is:- "<<endl;

     
    for(int i = 0; i<=top; i++){
        cout<<s[i];
        cout<<endl;
    };
};