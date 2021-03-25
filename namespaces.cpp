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

int main()
{
    first_space :: function();
    second_space :: function();
return 0;
}
