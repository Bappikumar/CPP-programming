#include<iostream>
using namespace std;

double division(int var1, int var2)
{
    if (var2 == 0) {
        throw "error";
    }
    return (var1 / var2);
}

int main()
{
    int s[6] = {1,2,3,8,0,5};
    int b = 10;
    float d ;

    for(int i=0;i<6;i++)
    {
    int ex=s[i];

    try {

        d = division(b,ex);
        cout << d << endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }
    }

    return 0;

}
