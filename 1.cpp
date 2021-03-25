#include <iostream>
using namespace std;

class base
{
 	private:
        int x;

 	protected:
 	    int y;

 	public:
 	    int z;

 	base()
 	{
 	   x = 1;
 	   y = 2;
 	   z = 3;
 	}
};
class derive: protected base
{
    void getshowdata();

 	public:
 	    void putshowdata()
 	    {
                    getshowdata();
                   cout << "x is not accessible" << endl;
                       cout << "value of y is " << y << endl;
                       cout << "value of z is " << z << endl;
            }
};

class base1: private derive
{

 	public:
 	    void showdata1()
 	    {
 	       cout << "x is not accessible" << endl;
               cout << "value of y is " << y << endl;
               cout << "value of z is " << z << endl;
 	    }
};
int main()
{
     base1 a;
     a.showdata1();
     a.getshowdata();

     return 0;
}
