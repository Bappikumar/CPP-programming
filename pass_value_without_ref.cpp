#include <iostream>
using namespace std;

class building {
    int room;
public:
    int i;
    building(int i);
    ~building();
    void neg(building b)
    { b.i =-b.i; }

};
building::building(int num)
    {
    cout << "Constructing complete room number " << num << "\n";
    room = num;
    }
building::~building()
    {
    cout << "Destructing complete room number " << room << "\n";
    }
int main()
    {
    int i;
    building b(40);
    b.i = 50;
    b.neg(b);
    cout << b.i << "\n";
    return i;
    }

