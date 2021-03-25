#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("Test.txt");
    file<<"I am Bappi Kumar.I am 25 years old."<<endl;
    file.close();
}
