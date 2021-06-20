#include<iostream>
using namespace std;

//Create Dynamic array over heap
int *createArray(int &sizeOfArray, int init)
{
    //Here we have created a pointer which stores the starting address of the array over the heap. We can return this because it is not local variable.
    int *ptr{nullptr};
    ptr = new int[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++)
    {
        *(ptr + i)=init;
    }
    return ptr;
}
//Example of local pointer variable, we can return the pointer but not the address of a local variable
int *dont()
{
    int size{};
    return &size;
}
int *dont2()
{
    int size{};
    int *ptr = &size;
    return ptr;
}

void change(int &value)
{
    value*=10;
}

int main()
{
    int sizeOfArray = 10;
    int *btr = createArray(sizeOfArray,0);
    for(int i=0;i<sizeOfArray;i++)
    {
        cout<<*(btr + i)<<endl;
    }
    dont();
    dont2();
    int value=10;
    change(value);
    cout<<value;
}
