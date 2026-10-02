#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll_no;
    string name;
    float m1, m2, m3;
    char grade;
    float total;
    float percentage;

public:
    void getdata();
    void CalculateResult();
    void displaydata();
};

   void student::getdata()
{
    cout << "Enter Roll No.= ";
    cin >> roll_no;
    cout << "Enter name= ";
    cin >> name;
    cout << "Enter marks of m1= ";
    cin >> m1;
    cout << "Enter marks in m2= ";
    cin >> m2;
    cout << "Enter marks in m3= ";
    cin >> m3;
}

void student::CalculateResult()
{
    total = m1 + m2 + m3;
    percentage = total / 3;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
}

void student::displaydata()
{
    cout << "Roll No = " << roll_no << endl;
    cout << "Name = " << name << endl;
    cout << "Marks in Subject 1 = " << m1 << endl;
    cout << "Marks in Subject 2 = " << m2 << endl;
    cout << "Marks in Subject 3 = " << m3 << endl;
    cout << "Total marks = " << total << endl;
    cout << "Percentage = " << percentage << endl;
    cout << "Grade = " << grade << endl;
}

int main()
{
    student s1, s2;
    s1.getdata();
    s1.CalculateResult();
    s1.displaydata();
    return 0;
}