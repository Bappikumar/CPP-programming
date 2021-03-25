#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;

int main()
{
    char text[200];
    fstream st;
    st.open("E:ru.txt",ios::app);
    if(!st)
    {
        cout<<"File creation failed";
    }
    else
    {
        st<<"Computer Science & Engineering"<<endl;
        cout << "\nWrite text to be written on file." << endl;

        cin.getline(text, sizeof(text));
        st << text << endl;
        st.close();
    }

    return 0;
}

