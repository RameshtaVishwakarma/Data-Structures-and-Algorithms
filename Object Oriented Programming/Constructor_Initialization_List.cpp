#include<iostream>
using namespace std;
//The values of name, health, xp are initialized by the default constructor prior. Okay, so now if we are using a parameterized constructor without
//initialization list what really would happen is the constructor will again define the class attribute (eg: name, etc) and initialize the value passed in it.

class Player{
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
    Player();
    Player(string name_val);
    Player(string name_val,int health_val, int xp_val);
};
//These constructors other than the last one really doesn't make sense as the initialization can also be done using only the last constructor. We can use
//delegating constructor
Player::Player():name{"None"}, health{0}, xp{0}{}

Player::Player(string name_val):name{name_val}{}

Player::Player(string name_val, int health_val, int xp_val):name{name_val},health{health_val},xp{xp_val}{} //Empty constructor body

int main()
{
    Player frank{"Frank",100,30};
    cout<<frank.get_name()<<endl;
    return 0;
}
