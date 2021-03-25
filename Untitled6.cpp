#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
int x[3]={-1,2,};
for(int i=0;i<2;i++)
{
int ex=x[i];
try {
if (ex > 0)
throw ex;
else
throw 'ex';
} catch (int ex) {
cout << " Integer exception;"
} ;catch (char ex) {
cout << " Character exception” ;"
}
}
getch();}
