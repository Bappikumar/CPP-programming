#include<iostream>
using namespace std;

class building
{
    private:
 	   int general_bedroom,master_bedroom;
    public:
        building (int a)
        {
             general_bedroom = a;
             master_bedroom = 0;
        }
        building (int a,int b)
        {
             general_bedroom = a;
             master_bedroom =b;
        }
        building( int &a)
        {
            general_bedroom= a;

        }
        building( int &a, int &b)
 	    {
            general_bedroom = a;
            master_bedroom  = b;
        }
 	void display( )
 	{
 	     cout << "Total general room = " << general_bedroom << " and " << "Total master bedroom = " << master_bedroom << endl;
 	}
};

int main()
{
        building s1(2);
        building s2(10,45);
        building s3(s1);
        building s4(s2);
        building s5 = s3;
        building s6 = s4;
        s1.display();
        s2.display();
        s3.display();
        s4.display();
        s5.display();
        s6.display();

 	return 0;
}

