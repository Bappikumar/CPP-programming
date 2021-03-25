#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Student
	{
        char Name[100];
		int Roll;
		float Marks;

public:

		Student(char Nm[],int R,float Mks)
		{
		    strcpy(Name,Nm);
			Roll = R;
			Marks = Mks;
		}

		Student(int Roll,char Name[],float Marks)
		{
		    strcpy(Name,Name);
			Roll = Roll;
			Marks = Marks;
		}

		Student(char Name[],float Marks,int Roll)
		{
		    strcpy(this->Name,Name);
			this->Roll = Roll;
			this->Marks = Marks;
		}

void Display()
		{
		    cout<<"Name : "<<Name<<endl;
			cout<<"Roll : "<<Roll<<endl;
			cout<<"Marks : "<<Marks<<endl;
		}
};


int main()
	{

		Student S1("Alip",1,89.63);
		Student S2("Bappi",78.53,2);
		Student S3("Suman",3,68.94);

		cout<<"Details of Student 1 : "<<endl;
		S1.Display();

		cout<<"\nDetails of Student 2 : "<<endl;
		S2.Display();

		cout<<"\nDetails of Student 3 : "<<endl;
		S3.Display();

return 0;

	}


