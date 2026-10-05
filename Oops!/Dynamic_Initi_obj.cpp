#include <iostream>
using namespace std;
class fixed_deposit{
    long int p_amount;
    int years;
    float rate;
    float R_value;

    public:
     fixed_deposit(){};
     fixed_deposit(long int p, int y, float r = 0.15);
     fixed_deposit(long int p, int y, int r);
     void display(void);

};

fixed_deposit :: fixed_deposit(long int p, int y, float r){
    p_amount = p;
    years = y, rate = r;
    R_value = p_amount;

    for(float i=1; i<y; i++){
        R_value = R_value*(1.0+ float(r)/100);
    };

};

fixed_deposit :: fixed_deposit(long int p, int y, int r){
    p_amount = p; years = y; rate = r;
    R_value = p_amount;

    for(int i = 1; i<=y; i++){
        R_value = R_value*(1.0+r);
    }
};

void fixed_deposit :: display(void){
    cout<<"Principal Amount= "<<p_amount<<"\n";
    cout<<"Return Value= "<<R_value<<"\n";
};

int main(){
    fixed_deposit FD1,FD2,FD3;
    long int p; int y; float r;
    
    cout<<"Enter amount, period, interest rate(in %)"<<"\n";
    cin>>p>>y>>r;

    FD1 = fixed_deposit(p,y,r);
    cout<<"Enter amount, period, interest rate(decimal form)"<<"\n";
    cin>>p>>y>>r;

    FD2 = fixed_deposit(p,y,r);
    cout<<"Enter amount and period"<<"\n";
    cin>>p>>y;

    FD3 = fixed_deposit(p,y);
    cout<<"\nDeposit 1 ";
    FD1.display();
    cout<<"\nDeposit 2 ";
    FD2.display();
    cout<<"\nDeposit 3 ";
    FD3.display();
    return 0;

};