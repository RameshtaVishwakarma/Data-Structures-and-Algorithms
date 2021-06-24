#include<iostream>
using namespace std;

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

Player::Player():Player{"None",0,0}{}

Player::Player(string name_val):Player{name_val,0,0}{}

Player::Player(string name_val, int health_val, int xp_val):name{name_val},health{health_val},xp{xp_val}{} //Empty constructor body

int main()
{
    Player frank{"Frank",100,30};
    cout<<frank.get_name()<<endl;
    return 0;
}
