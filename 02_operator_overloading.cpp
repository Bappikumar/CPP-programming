#include <iostream>
using namespace std;

class sum{
    int elmnt1, elmnt2;
    public:
    sum()
     {}
    sum(int el, int et)
     {
    elmnt1 = el;
    elmnt2 = et;
    }
void show() {
    cout <<"1st element is: "<<elmnt1 << " ";
    cout <<"2nd element is: "<<elmnt2 << "\n";
    }
    sum operator+(sum op2);
    sum operator-(sum op2);
    sum operator=(sum op2);
    sum operator++();
    };


sum sum::operator+( sum op2)
    {
    sum temp;
    temp.elmnt1 = op2.elmnt1 + elmnt1;
    temp.elmnt2 = op2.elmnt2 + elmnt2;
    return temp;
    }


sum sum::operator-(sum op2)
    {
    sum temp;
    temp.elmnt1 = elmnt1 - op2.elmnt1;
    temp.elmnt2 = elmnt2 - op2.elmnt2;
    return temp;
    }


sum sum::operator=(sum op2)
    {
    elmnt1 = op2.elmnt1;
    elmnt2 = op2.elmnt2;
    return *this;
    }

sum sum::operator++()
    {
    elmnt1++;
    elmnt2++;
    return *this;
    }
int main()
    {
    sum s1(10, 20), s2( 5, 30), s3(90, 90);
    s1.show();
    s2.show();

    ++s1;
    s1.show();

    s2 = ++s1;
    s1.show();
    s2.show();

    s1 = s2 = s3;
    s1.show();
    s2.show();

return 0;
    }
