/*Difficulty Level : Hard
Refer GFG for explnation*/


#include<bits/stdc++.h>
using namespace std;

//creating a class stack
class Stack{
public:
    //Defining the data members.
    int *arr;
    int *next;
    int *top;
    int free;
    int n,k;
    //constructor definition
    Stack(int k, int n)
    {
        arr = new int[n];
        next = new int[n];
        top = new int[k];
        free = 0;
        for(int i=0;i<k;i++)
            top[i] = -1;
        for(int i=0;i<n-1;i++)
            next[i] = i+1;
        next[n-1]=-1;
    }

    //Defining the methods
    void push(int x, int sn);
    int pop(int sn);
    bool isEmpty(int sn);
    bool isFull();
};

/*
n=6 , k=3;
arr[] = {_,_,_,_,_,_}
next[] = {1,2,3,4,5,-1}
top[] = {-1,-1,-1}
*/

//Implementing member methods
void Stack::push(int x, int sn)
{
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    int i = free;
    free = next[i];
    next[i] = top[sn];
    top[sn] = i;
    arr[i] = x;
    cout<<"Value inserted successfully"<<endl;
}

int Stack::pop(int sn)
{
    int i = top[sn];
    top[sn]=next[i];
    next[i]=free;
    free = i;
    return arr[i];
}

bool Stack::isEmpty(int sn)
{
    return (top[sn] == -1);
}

bool Stack::isFull()
{
    return(free==-1);
}
int main()
{
    int k = 3, n = 10;
    Stack ks(k, n);
        // Let us put some items in stack number 2
    ks.push(15, 2);
    ks.push(45, 2);

    // Let us put some items in stack number 1
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);

    // Let us put some items in stack number 0
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);

    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;
    return 0;
}
