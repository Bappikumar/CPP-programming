#include <iostream>
#include <iostream>
using namespace std;

class building
{
     private:
        int general_room,master_bedroom;
     public:
       building ()
       {
            general_room = master_bedroom = 0;
        }
        building(int a)
       {
             general_room = master_bedroom = a;
        }
        building(int a,int b)
        {
              general_room = a;
              master_bedroom = b;
        }
        void display()
        {
              cout << "Total general room = " << general_room << " and " << "Total master bedroom = " << master_bedroom << endl;
        }
};

int main()
{
     building b1;
     building b2(10);
     building b3(20,34);
     b1.display();
     b2.display();
     b3.display();

return 0;
 }
