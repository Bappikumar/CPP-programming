#include <iostream>
using namespace std;

char &replace(int i);
char s[80] = "Bappi Kumar";

int main()
    {
    replace(9) = 'X';
    cout << s;
    return 0;
    }

char &replace(int i)
    {
    return s[i];
    }


