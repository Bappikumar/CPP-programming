#include <iostream>
using namespace std;

void naogaon_people(char* c) {
    cout << "Gender: " << c << endl;
}

void naogaon_people(int i) {
    cout << "Total naogaon_people: " << i << endl;
}
void naogaon_people(double  f) {
    cout << "Income per day: " << f << endl;
}
void naogaon_people(int i,float f) {
    int d;
    d=i*f;
    cout << "Total income: " << d << endl;

}


int main()
 {
      naogaon_people("male");
      naogaon_people(10560);
      naogaon_people(560.46);
      naogaon_people(10560,560.46);

  return 0;
}
