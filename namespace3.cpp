#include<iostream>
using namespace std;

namespace first_space
{
    void function(int a, int i)
    {
        int sum;
        cin>>a>>i;
        sum=i+a;
        cout<<"sum of first_space"<<endl;
        cout <<sum<<endl;
    }

}
namespace second_space
{
    void function(int x,int y)
    {
        int result;
        cin>>x>>y;
        result=x*y;
        cout<<"result of second_space"<<endl;
        cout <<result<<endl;
    }
}

int main()
{
    int a,i,x,y;
    first_space :: function(a,i);
    second_space :: function(x,y);
return 0;
}
