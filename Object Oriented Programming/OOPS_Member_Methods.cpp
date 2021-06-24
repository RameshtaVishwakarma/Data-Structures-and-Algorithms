#include<iostream>
using namespace std;

//Member methods have access to member attributes so we don't need to pass them as arguments, hence they are relatively simple. It can be implemented inside
//the class declaration but this will be implicitly inline. Majorly we implement it outside the class using the scope resolution operator. It can also be
//implemented in separate .h file for class declaration and .cpp for the class implementation.

class Account{
private:
    string name;
    double balance;

public:
    //Inline straight forward methods
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}

    //Method prototypes. Methods are defined outside the class
    void set_name(string n);
    string get_name();
    void deposit(double amount);
    void withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

void Account::deposit(double amount)
{
    balance+=amount;
    cout<<"Deposit Successful"<<endl;
}

void Account::withdraw(double amount)
{
    if(balance - amount < 0)
    {
        cout<<"Withdraw failed!"<<endl;
    }
    else{
        balance-=amount;
        cout<<"Withdraw successful"<<endl;
    }
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    cout<<frank_account.get_name()<<endl;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    return 0;
}
