#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Creating an integer pointer
    int *p{nullptr};
    //Here we will not create a variable and store the address in p, instead we will create an integer during run-time and store its address. This can be done
    //using the new keyword.
    p = new int; //Allocate an integer on the heap.
    //Now we can change the value of the variable using the pointer, since it dosen't have a name if we forget the pointer this will result into memory leak
    cout<<p<<endl;
    cout<<*p<<endl;
    *p=10;
    cout<<*p<<endl;

    //Creating an array over heap
    int *arr_ptr{nullptr};
    int sizeOfArray;
    cin>>sizeOfArray;
    arr_ptr = new int[sizeOfArray];
    cout<<arr_ptr<<endl;
    cout<<*arr_ptr<<endl;

    //Accessing array elements.

    for(int i=0;i<sizeOfArray;i++)
    {
        cout<<arr_ptr[i]<<endl;
    }

    //We can also traverse this array with the  help of * operator and pointer arithmetic
    for(int i=0;i<sizeOfArray;i++)
    {
        cout<<*(arr_ptr + i)<<endl;;
    }
    return 0;
}
