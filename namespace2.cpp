#include<iostream>
using namespace std;

namespace first_space
{
    void function()
    {
        cout << "inside first namespace" <<endl;
    }

}
namespace second_space
{
    void function()
    {
        cout << "inside second namespace" <<endl;
    }
}
//using namespace first_space;
using namespace second_space;
int main()
{
    function();

return 0;
}

