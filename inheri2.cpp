using namespace std;

class phn_operator
{
protected:
    char name[100];
    int code;
//public:
    void getphn_operator()
    {
        cout<<"Enter operator name & code: \n";
        cin>>name>>code;
    }
    public:
    void putphn_operator()
    {
        cout<<"Operator name: "<<name<<endl;
        cout<<"Operator code: "<<code<<endl;
    }
};

class information : private phn_operator
{
protected:
    float callrate;
    int client;
public:
    void getinformation()
    {
        cout<<"Enter callrate & client numbers: \n";
        cin>>callrate>>client;
    }
    void putinformation()
    {
        cout<<"Company callrate: "<<callrate<<endl;
        cout<<"Total client: "<<client<<endl;
    }
};

class products :private information
{
private:
    char name[100];
    int model;
//public:
    void getproducts()
    {
        cout<<"Enter product name & model details: \n";
        cin>>name>>model;
    }
    public:
    void putproducts()
    {
        cout<<"phn name: "<<name<<endl;
        cout<<"model no: "<<model<<endl;
    }
};

class serviceholders : public products
{
protected:
    int s_holder;
    int salary;
public:
    void getserviceholders()
    {
        cout<<"Enter the total number of company's serviceholders & their salary per month: \n";
        cin>>s_holder>>salary;
    }
    void putseviceholders()
    {
        cout<<"Total serviceholder: "<<s_holder<<endl;
        cout<<"Total salary per month: "<<salary<<endl;
    }
};


int main()
{
    serviceholders s;
    s.getphn_operator();
    s.getinformation();
    s.getproducts();
    s.getserviceholders();
    s.putphn_operator();
    s.putinformation();
    s.putproducts();
    s.putseviceholders();
    getch();
}
