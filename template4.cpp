#include<iostream>
#include<conio.h>
using namespace std;

template <class t>
t sum(t a,t b)
{
    return a+b;
}
template <class t>
t sum(t a,t b,t c)
{
    return a+b+c;
}
int main()
    {
        cout << " Two int sum= "<<sum(2,4)<<endl;
        cout << "Two double sum= "<<sum(2.51,3.11)<<endl;
        cout << "Two float sum= "<<sum(3.5,6.7)<<endl;
        cout << "Three Int sum= "<<sum(2,4,8)<<endl;
        cout << "Three double sum= "<<sum(2.51,3.87,6.67)<<endl;
        cout << "Three float sum= "<<sum(2.5,3.9,7.9)<<endl;
        getch();
    }


