#include <iostream>
#include <string.h>
using namespace std;

class university
{
private:
            int student;
            string department;
public:
            university():student(0),department("")
            {}
            university(int s, string d): student (s), department(d)
            {}
            void get()
            {
                        cout<<"Enter department name= ";
                        cin>>department;
                        cout<<"Enter  total student= ";
                        cin>>student;
            }
            void print()
            {
                        cout<<"\nDepartment's name is: "<<department<<endl;
                        cout<<"Total number of students: "<<student<<endl;
            }
};
int main ()
{
            university *ru= new university;
            (*ru).get();
            (*ru).print();
return 0;
}
