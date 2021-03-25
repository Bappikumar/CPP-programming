#include <iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i, int j);
int main()
{
cout << myfunc(10) << " ";
cout << myfunc(4, 5);
return 0;
}
int myfunc(int i)
{
return i;
}
int myfunc(int i, int j)
{
return i*j;
}
