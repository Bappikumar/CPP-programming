#include<iostream>
#include<conio.h>
using namespace std;

template <class t>
t sum(t a[],int size)
{
    t s=0.0;
    for(int i=0;i<size;i++)
    s=s+a[i];
    return s;
}

int main()
    {
       int x[5]={10,20,30,40,50};
       float y[3]={1.3,3.4,2.4};
       cout << "int array = "<<sum(x,5)<<endl;
       cout << "float array = "<<sum(y,3)<<endl;
       getch();
    }


