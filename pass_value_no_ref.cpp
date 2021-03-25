#include<iostream>
using namespace std;

int add(int x);
int main()
{
    int data = 20;
   data=add(data);

    cout<<"value in data= "<<data<<endl;

return 0;
}

int add(int x)
{
    int input;

    cout<<"Enter the input to be added in data: "<<endl;
    cin>>input;

    x=x+input;

return x;
}
