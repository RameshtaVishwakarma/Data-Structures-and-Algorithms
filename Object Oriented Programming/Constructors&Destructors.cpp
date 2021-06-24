/*A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance
of class) create. It is special member function of the class. */
#include<iostream>
using namespace std;

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
    //Overloaded Constructors
    Player()
    {
        cout<<"No Argument Constructor"<<endl;
    }
    Player(string name)
    {
        cout<<"String argument constructor called"<<endl;
    }
    Player(string name, int health, int xp)
    {
        cout<<"Three argument constructor called" <<endl;
    }
    ~Player()
    {
         cout<<"Destructor called for "<<name<<endl;
    }
};


int main()
{
    {
        Player Slayer;
        Slayer.set_name("Slayer");
        //We are forcing it to be destroyed, by putting it in the block of curly braces. The compiler calls the destructor itself but here we have created a manual destructor for demonstration purpose
    }
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero"); //We are defining using the set_name function since the constructor is blank.
        Player villain("Villain",100,10);
        villain.set_name("Villain");
        //Now the elements are stored in stack hence destructor for villain would be called first.
    }
    return 0;
}
