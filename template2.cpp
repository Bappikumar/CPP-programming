#include<iostream>
#include<conio.h>
using namespace std;

template <class t1,class t2>
float sum(t1 a,t2 b)
{
    return a+b;
}

int main()
    {
        cout << "Int sum= "<<sum(2,4)<<endl;
        cout << "double sum= "<<sum(2.51,3.11)<<endl;
        cout << "float sum= "<<sum(3.5,6.7)<<endl;
        cout << "Int,float sum= "<<sum(2,4.8)<<endl;
        cout << "double,int sum= "<<sum(2.51,3)<<endl;
        getch();
    }

