#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream in;
    in.open("test", ios::in);
    if(!in)
        {
        cout<<"cannot open this file"<<endl;
    }
    char item[20];
    float cost;
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in.close();
    return 0;
}

