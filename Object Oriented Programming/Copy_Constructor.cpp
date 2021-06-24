/*Copy constructor is almost used every time but you didn't noticed yet. The compiler generates a copy constructor by default when needed. Consider the use case wherein
1. You are passing an object by value to a function. Here a copy of the passed object will be created which will be local to that particular function.
2. When We are returning an object from a function we return the copy of the object. Here the default copy constructor is called.
3. When we want to create another object from existing object.*/

//SHALLOW COPY VS DEEP COPY
/*When we are using raw pointers if we use the compiler generated copy constructor then it will only copy the pointer and not the value it is pointing to. This is known
as shallow copy. So the best practice is always implement the copy constructor if you are using raw pointers.*/

#include<iostream>
using namespace std;
class Player{
private:
    string name;
    int health;
    int xp;
public:
    string get_name()
    {
        return name;
    }
    int get_health()
    {
        return health;
    }
    int get_xp()
    {
        return xp;
    }
    //Constructor parameter
    Player(string name_val="None", int health_val=0, int xp_val=0);

    //Copy Constructor- Class name... const...single object... by source
    Player(const Player &source);

    //Destructor
    ~Player(){cout<<"Destructor is called for "<<name<<endl;}

};

//Copy constructor
Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}
{
    cout<<"Made copy of "<<source.name<<endl;
}

//Using the initialization list and default parameters, here we don't need to set the default values as we have already done in the main class.
Player::Player(string name_val, int health_val, int xp_val):name{name_val}, health{health_val}, xp{xp_val}{cout<<"Three args constructor called "<<endl;}

//Type 1:
void display_player(Player p)
{
    cout<<"Name "<<p.get_name()<<endl;
    cout<<"Health "<<p.get_health()<<endl;
    cout<<"XP "<<p.get_xp()<<endl;
}

int main()
{
    Player frank("frank",100,13);
    display_player(frank);
    return 0;
}
