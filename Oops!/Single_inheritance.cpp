#include<iostream>
using namespace std;

class B{
    int a;
    public:
     int b;
     void get_ab();
     int get_a();
     void show_a(void);
};

class d : public B {
    int c;
    public:
     void multi(void);
     void display(void);
};

void B :: get_ab(){
    a = 10;
    b = 15;
};

int B :: get_a(){
    return a;
};

void B :: show_a(){
    cout<<"a= "<<a<<endl;
};

void d :: multi(){
    c = b*get_a();
};

void d :: display(){
    cout<<"a= "<<get_a()<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
};

int main(){
  d p;
  p.get_ab();
  p.show_a();
  p.multi();
  p.display();
  p.b = 30;
  p.multi();
  p.display();
};