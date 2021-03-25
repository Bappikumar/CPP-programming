#include<iostream>
using namespace std;

void add(int &x);
int main()
{
    int data = 20;
    add(data);

    cout<<"value in data= "<<data<<endl;

return 0;
}

void add(int &x)
{
    int input;

    cout<<"Enter the input to be added in data: "<<endl;
    cin>>input;

    x=x+input;


}
