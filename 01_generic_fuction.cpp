#include <iostream>
using namespace std;

template <class X>
void bubble(X *items,int count)
    {
      X t;

      for(int a=1; a<count; a++)
        for(int b=count-1; b>=a; b--)
          if(items[b-1] > items[b])
            {
            t = items[b-1];
            items[b-1] = items[b];
            items[b] = t;
          }
    }

int main()
    {
      int p[7] = {7, 5, 4, 3, 9, 8, 6};
      double q[5] = {4.3, 2.5, -0.9, 10.2, 3.0};
      char r[5] = {'s', 'e', 'f', 'z', 'n'};

          cout << "Here is unsorted integer array: ";
          for(int i=0;  i<7; i++)
            cout << p[i] << ' ';
          cout << endl;

          bubble(p, 7);

          cout << "Here is sorted integer array: ";
          for(int i=0;  i<7; i++)
            cout << p[i] << ' ';
          cout << endl;

          cout << "Here is unsorted double array: ";
          for(int i=0;  i<5; i++)
            cout << q[i] << ' ';
          cout << endl;

          bubble(q, 5);

          cout << "Here is sorted double array: ";
          for(int i=0;  i<5; i++)
            cout << q[i] << ' ';
          cout << endl;

          cout << "Here is unsorted char array: ";
          for(int i=0;  i<7; i++)
            cout << r[i] << ' ';
          cout << endl;

         bubble(r, 5);

         cout << "Here is sorted char array: ";
          for(int i=0;  i<5; i++)
            cout << r[i] << ' ';
          cout << endl;


      return 0;
    }
