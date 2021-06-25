#include"Account.h"

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance+=amount;
//    cout<<"Deposit Successful"<<endl;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount < 0)
    {
//        cout<<"Withdraw failed!"<<endl;
        return false;
    }
    else{
        balance-=amount;
//        cout<<"Withdraw successful"<<endl;
        return true;
    }
}
