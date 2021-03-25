#include<iostream>
#include<conio.h>
using namespace std;

class Employee
    {
        int Id;
        char Name[25];
        int Age;
        long Salary;

public:
    void getdata();
    void putdata();

};
void Employee :: getdata ()
{
    cout<<"\n\tEnter Employee Id : ";
    cin>>Id;

    cout<<"\n\tEnter Employee Name : ";
    cin>>Name;

    cout<<"\n\tEnter Employee Age : ";
    cin>>Age;

    cout<<"\n\tEnter Employee Salary : ";
    cin>>Salary;


}

void Employee :: putdata ()
{
    cout<<"\n"<<Id<<"\t"<<Name<<"\t"<<Age<<"\t"<<Salary;
  }
int main()
{

    int i;

    Employee E[3];

    for(i=0;i<3;i++)
        {
            cout<<"\nEnter details of "<<i+1<<" Employee";
            E[i].getdata();
              }

            cout<<"\nDetails of Employees";
            for(i=0;i<3;i++)
            E[i].putdata();

       }
