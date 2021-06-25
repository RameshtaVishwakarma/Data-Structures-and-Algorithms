#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<string>
class Account{
private:
    std::string name;
    double balance;

public:
    //In line straight forward methods
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}

    //Method prototypes. Methods are defined in Account.cpp file.
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // ACCOUNT_H_INCLUDED
