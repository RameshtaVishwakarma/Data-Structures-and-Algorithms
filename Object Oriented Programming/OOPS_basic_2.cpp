#include<bits/stdc++.h>
//Don't use namespace std, while dealing with OOPS
using namespace std;

class player{
public:
    //Data attributes
    string name;
    int health;
    int xp;

    //Methods
    void talk(string msg){cout<<name<<" says "<<msg<<endl;}
    bool is_dead();
};

class Account{
public:
    string name;
    double balance;

    void deposit(double bal){balance+=bal;cout<<"In deposit, the total balance is "<<balance<<endl;}
    void withdraw(double bal){balance-=bal;cout<<"In Withdraw, the total balance is "<<balance<<endl;}
};
int main()
{
    player frank;
    player hero;
    player players[]={hero,frank};

    frank.name="frank";
    frank.health=100;
    frank.xp=12;
    frank.talk("Hi");

    //Created on the heap
    player *enemy{nullptr};
    enemy = new player;

    enemy->name="Imposter";
    enemy->health=100;
    enemy->xp=35;
    (*enemy).talk("I am here to kill you!");
    //Delete
    delete enemy;

    //Object instances for account
    Account frank_account;
    frank_account.name="Frank's Account";
    frank_account.balance=1000.0;

    frank_account.deposit(300.0);
    frank_account.withdraw(900.0);

    Account *jims_account;
    jims_account = new Account;
    jims_account->balance=3000.0;
    cout<<jims_account->name<<endl;
    jims_account->deposit(10000.0);
    jims_account->withdraw(2000.0);

    return 0;
}
