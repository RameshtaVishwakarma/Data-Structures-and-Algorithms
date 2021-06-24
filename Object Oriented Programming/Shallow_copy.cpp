#include<iostream>
using namespace std;

//We make a class which has pointer as data attribute
class shallow{
private:
    int *data;

public:
    //Since the member methods are small we are declaring here.
    void set_data(int d){*data = d;}
    int get_data(){return *data;}

    //constructor9
    shallow(int d);

    //copy constructor
    shallow(const shallow &source);


    //Destructor
    ~shallow();
};

//constructor definition
shallow::shallow(const shallow &source):data{source.data}
{
    cout<<"Copy constructor-shallow copy "<<endl;
}

//constructor
shallow::shallow(int d){data = new int; *data = d;}

//Destructor
shallow::~shallow()
{
    cout<<"Destructor freeing data "<<endl;
}

void display_shallow(shallow s)
{
    cout<<s.get_data()<<endl;
}
int main()
{
    shallow obj1{100};
    display_shallow(obj1);

    shallow obj2{obj1};
    obj2.set_data(1000);
    cout<<obj2.get_data();

    return 0;
}
