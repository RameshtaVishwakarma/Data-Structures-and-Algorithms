#include<bits/stdc++.h>
using namespace std;
/*
Pros: Easy to implement. Memory is saved as pointers are not involved.
Cons: It is not dynamic. It doesn’t grow and shrink depending on needs at runtime
*/
class Stack{
public:
    //Define the data members
    int capacity;
    int top;
    int *arr;
    //Defining a constructor
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[this->capacity];
        top = -1;
    }
    //Function declaration
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

//We need 4 functions push,pop,peek and isEmpty
//Push function: will push the passed value into the stack
bool Stack::push(int x)
{
    if(top >= capacity-1)
    {
        cout<<"Cannot push-> stack overflow"<<endl;
        return false;
    }
    else{
        top++;
        arr[top] = x;
        return true;
    }
}
//Pop function: will pop and return the element at the top of the stack
int Stack::pop()
{
    if(top < 0)
        cout<<"Cannot pop-> stack underflow"<<endl;
    else{
        return arr[top--];
    }
}

//Peek function: to find the element currently at the top of stack
int Stack::peek()
{
    if(top >= capacity-1)
    {
        cout<<"Stack overflow"<<endl;
        return 0;
    }
    else if(top < 0)
    {
        cout<<"stack underflow"<<endl;
        return  0;
    }
    else
        return arr[top];
}

//isEmpty Function:
bool Stack::isEmpty()
{
    return (top<0);
}

// Driver program to test above functions
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }

    return 0;
}
/*
Push: O(1)
Pop: O(1)
Top: O(1)
Search (Something like lookup, as a special operation): O(n)
*/
