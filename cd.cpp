#include <iostream>
using namespace std;

class world
{
protected:
    int animal;

public:
    world(int x)
    {
    animal=x;
    cout << "Constructing number of animal: "<<animal<<endl;
     }
    ~world()
    {
        cout << "Destructing no virus:\n";
        }
    };

class bangladesh {

protected:
    int people;

public:
    bangladesh(int x)
    {
        people=x;
        cout << "Constructing number of people: "<<people<<endl;
        }
    ~bangladesh()
     {
         cout << "Destructing no problems:\n";
         }
    };

class information: public world, public bangladesh
{
public:

    information(int x, int y): world(x), bangladesh(y)
    {
        int sum;
        sum=people+animal;
        cout << "Constructing information: "<<sum<<endl;
        }

    ~information()
    {
         cout << "Destructing information:\n";
         }

void show()
{
    cout <<"number of animal: "<<animal <<endl;
    cout <<"number of people: " << people <<endl;
     }
};
int main()
{
       information i(200, 600);
       i.show();

return 0;
}
