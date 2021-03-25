#include<iostream>
#include<conio.h>
using namespace std;

template <class t>
t sum(t a,t b)
{
    return a+b;
}

int main()
    {

        cout << "Int sum= "<<sum(2,4)<<endl;
        cout << "double sum= "<<sum(2.51,3.11)<<endl;
        cout << "float sum= "<<sum(3.5,6.7)<<endl;
        getch();
    }


