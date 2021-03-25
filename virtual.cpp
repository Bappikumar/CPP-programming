#include<iostream>
#include<conio.h>
using namespace std;

class university
{
private:
    char name[100];
    int code;
public:
    void getuniversity()
    {
        cout<<"Enter the name of university & serial code: \n";
        cin>>name>>code;
    }
    void putuniversity()
    {
        cout<<"The name of university: "<<name<<endl;
        cout<<"Serial code: "<<code<<endl;
    }
};

class subject1 : public virtual university
{
protected:
    char name[100];
    int student;
public:
    void getsubject1()
    {
        cout<<"Enter subject1 name & students number: \n";
        cin>>name>>student;
    }
    void putsubject1()
    {
        cout<<"Subject1 name: "<<name<<endl;
        cout<<"Total students number: "<<student<<endl;
    }
};

class subject2 : public virtual university
{
protected:
    char name[100];
    int student;
public:
    void getsubject2()
    {
        cout<<"Enter subject2 name & students number: \n";
        cin>>name>>student;
    }
    void putsubject2()
    {
        cout<<"Subject2 name: "<<name<<endl;
        cout<<"Total students number: "<<student<<endl;
    }
};

class information : public subject1, public subject2
{
protected:
    char faculties[1000];
    int stdnt;
public:
    void getinformation()
    {
        cout<<"Enter the name of faculties and total number of students: \n";
        cin>>faculties>>stdnt;
    }
    void putinformation()
    {
        cout<<"Enter the name of faculties name: "<<faculties<<endl;
        cout<<"Total number of students: "<<stdnt<<endl;
    }
};


int main()
{
    information i;
    i.getuniversity();
    i.getsubject1();
    i.getsubject2();
    i.getinformation();
    i.putuniversity();
    i.putsubject1();
    i.putsubject2();
    i.putinformation();
    getch();
}

