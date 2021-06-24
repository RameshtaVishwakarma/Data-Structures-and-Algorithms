#include<iostream>
using namespace std;
//The compiler has a default constructor inbuilt which helps us to initialize data members when no data is passed, but we can create our own parameterized
//constructor. Once the constructor is created the compiler doesn't provide default constructor. So if we need it we have to explicitly define the default
//constructor. The best practice is to define your own.

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_input)
    {
        name = name_input;
    }
    string get_name()
    {
        return name;
    }
    //Default constructor... Once we have defined parameterized constructor we must define a default constructor. And this is what it is, and the good style
    //is to give default values.

    //What happens here is that the name instance is defined first and then the value None is assigned to it.
    Player()
    {
        name="None";
        health=100;
        xp=3;
    }

    //In here name instance is created and then the value assigned same goes for health.
    Player(string name_val,  int health_val)
    {
        name = name_val;
        health = health_val;
    }

    //Same as above.
    Player(string name_val)
    {
        name = name_val;
    }

    //same as above. Overloaded Constructor i.e. Parameterized
    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }

    //What we actually want to do is initialize the instance and assign the passed value there itself. To avoid overhead. This is done using constructor
    //initialization list.
};

int main()
{
    Player frank{"Frank",100,30};
    cout<<frank.get_name()<<endl;
    Player james{"James"};
    cout<<james.get_name()<<endl;
    return 0;
}
