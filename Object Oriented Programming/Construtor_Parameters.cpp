/* We can avoid the overhead of using multiple constructors and use a single constructor by providing default constructor parameters in the main constructor                                               . */
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
    //Constructor parameter
    Player(string name_val="None", int health_val=0, int xp_val=0);
};

//Using the initialization list and default parameters, here we don't need to set the default values as we have already done in the main class.
Player::Player(string name_val, int health_val, int xp_val):name{name_val}, health{health_val}, xp{xp_val}{cout<<"Three args constructor called"<<endl;}

int main()
{
    Player frank("Frank");
    Player Hero("Hero",100);
    Player Villain("Villain",100,13);
    return 0;
}
