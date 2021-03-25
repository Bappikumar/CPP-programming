#include<iostream>
#include<conio.h>
#include <fstream>

using namespace std;

int main()
{
    fstream st;
    st.open("E:\studytonight.txt",ios::out);
    if(!st)
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created";
        st.close();
    }
    getch();
    return 0;
}
