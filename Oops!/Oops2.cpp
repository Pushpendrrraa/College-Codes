#include <iostream>
using namespace std;

class employee{
    int employId;
    float basicSalary;

    public:
     void getdata();
     float CalculateHRA();
     float CalculateDA();
     float Calculate_Gross_Salary();
     void displaySalary();
};

void employee :: getdata(){
    cout<<"Enter EmployeeID: ";cin>>employId;
    cout<<"Enter Basic Salary: ";cin>>basicSalary;
};

float employee :: CalculateHRA(){
    return(0.20*basicSalary);
};

float employee :: CalculateDA(){
    return( 0.15*basicSalary);
};

float employee :: Calculate_Gross_Salary(){
    return(basicSalary+CalculateHRA()+CalculateDA());
};

void employee :: displaySalary(){
    cout<<"\n EmployeeID= "<<employId<<endl;
    cout<<"\n Basic Salary= "<<basicSalary<<endl;
    cout<<"\n HRA= "<<CalculateHRA()<<endl;
    cout<<"\n DA= "<<CalculateDA()<<endl;
    cout<<"\n Gross Salary= "<<Calculate_Gross_Salary()<<endl;
};

int main(){
    employee e1,e2;

    e1.getdata();
    e1.CalculateHRA();
    e1.CalculateDA();
    e1.Calculate_Gross_Salary();
    e1.displaySalary();
    return 0;
}