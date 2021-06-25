#include<iostream>
#include"Account.h"
using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    cout<<frank_account.get_name()<<endl;
    if(frank_account.deposit(1000.0)){cout<<"Deposit Successful"<<endl;}else{cout<<"Deposit Failed!"<<endl;}
    if(frank_account.withdraw(500.0)){cout<<"withdraw Successful"<<endl;}else{cout<<"withdraw Failed!"<<endl;}
    return 0;
}
