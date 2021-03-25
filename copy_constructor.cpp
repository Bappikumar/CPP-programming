#include<iostream>
using namespace std;

class building
{
    private:
 	   int bedroom;
    public:
 	building (int a)
 	{
 	     bedroom = a;
 	}
 	building( building &b)
 	{
 	    bedroom = b.bedroom;
        }
 	int display( )
 	{
 	     return bedroom;
 	}
};

int main()
{
        building b1(10);
        building b2(b1);
        building b3 = b1;
        building b4 = b2;
        cout << "building b1 bedroom = " << b1.display() << endl;
        cout << "building b2 bedroom = " << b2.display() << endl;
        cout << "building b3 bedroom = " << b3.display() << endl;
        cout << "building b4 bedroom = " << b4.display() << endl;

return 0;
}
