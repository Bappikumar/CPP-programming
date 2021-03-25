#include<iostream>
using namespace std;

class rajshahi;
class dhaka;
class naogaon{
    int people;

public:
    naogaon()
    {

    }
    naogaon(int n){

        people=n;
    }
void display_naogaon_people(){
    cout << "naogaon people = " <<people<<endl;

}
friend void total_people(naogaon,dhaka,rajshahi);
};

class dhaka{
    int people;

public:
    dhaka(){

    }
    dhaka(int d){
    people=d;
    }

void display_dhaka_people(){
    cout << "dhaka people = " <<people<<endl;

}
friend void total_people(naogaon,dhaka,rajshahi);

};
class rajshahi{
    int people;

public:
    rajshahi(){

    }
    rajshahi(int r){
    people=r;
    }

void display_rajshahi_people(){
    cout << "rajshahi people = " <<people<<endl;

}
friend void total_people(naogaon,dhaka,rajshahi);

};
void total_people(naogaon n, dhaka d, rajshahi r)
{
    int total;
    total= n.people+d.people+r.people;
    cout << "total people = " <<total<<endl;

}
int main(){
         naogaon n1(30000);
         n1.display_naogaon_people();

         dhaka d1(50000);
         d1.display_dhaka_people();

         rajshahi r1(40000);
         r1.display_rajshahi_people();

         total_people(n1, d1, r1);
return 0;
}

