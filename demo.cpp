#include<iostream>
#include<conio.h>
using namespace std;

class phn_operator
{
public:
    char name[100];
    name=samsung;
private:
    int model=66;
protected:
    float price=1650.98;
};

class information1: public phn_operator
{
    cout<<"phone name: "<<name<<endl;
    cout<<"phone model: "<<model<<endl;
    cout<<"phone price: "<<price<<endl;
};
class information2: protected phn_operator
{
    cout<<"phone name: "<<name<<endl;
    cout<<"phone model: "<<model<<endl;
    cout<<"phone price: "<<price<<endl;
};
class information3: private information2
{
    cout<<"phone name: "<<name<<endl;
    cout<<"phone model: "<<model<<endl;
    cout<<"phone price: "<<price<<endl;
};

int main()
{
    information3 i;
    //i.information3();
    i.information2();
    i.information1();
    getch();
}
