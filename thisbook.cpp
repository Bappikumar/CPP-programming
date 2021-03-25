#include <iostream>
using namespace std;

class pwr {
    double b;
    int e;
    double val;

public:
    pwr(double base, int exp);
    double get_pwr()
    {
        return val;

        }

};

pwr::pwr(double base, int exp)
{
    b = base;
    e = exp;
    val = 1;
    if(exp==0)
        return;
    for( ; exp>0; exp--)
        val = val * b;

}

int main()
{
    pwr x(4.0, 2), y(2.5, 1), z(5.7, 0);
    cout <<  "First value: "<<x.get_pwr()<<endl;
    cout << "Second value: "<< y.get_pwr()<<endl;
    cout << "Third value: "<< z.get_pwr()<<endl;
return 0;
}
