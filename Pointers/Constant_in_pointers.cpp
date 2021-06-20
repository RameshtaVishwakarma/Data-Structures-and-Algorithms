#include<iostream>
using namespace std;

int main()
{
    int high_score=100;
    int low_score=80;
    //demonstration 1: Pointers to constants, this will not allow us to change the variable to which our pointer variable is pointing
    const int *ptr = &high_score;
    cout<<*ptr<<endl;
    *ptr=90; //Thi wont work as our pointer is a pointer pointing to constant hence it cannot be changed.


    //Demonstration 2: constant pointers, this is when you cannot change the pointer value to which it is pointing currently.
    int *const btr = &high_score;
    *btr=90; //This will work
    btr = &low_score //This won't work

    //Demonstration 3: constant pointer to constant
    const int *const ctr = &high_score;
    *ctr=90;
    ctr=&low_score;//Here both condition won't work


    return 0;
}
