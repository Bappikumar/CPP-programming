#include<iostream>
#include<conio.h>

using namespace std;

int sum(int x, int y)
{
    return x+y;
}
float sum(double x, double y)
{
    return x+y;
}

int main()
    {
        cout << "Int sum= "<<sum(2,4)<<endl;
        cout << "double sum= "<<sum(2.5,3.1)<<endl;

return 0;
    }

