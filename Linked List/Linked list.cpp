#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    //Self referential structure.
    node *next;
    //constructor to initialize the node.

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void display(node *curr)
{
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
int main()
{
    //This is a function call. The node(10) makes a function call to initialize the integer data. The compiler is smart to type cast the value and store in
    //the data attribute using the constructor
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next=temp1;
    temp1->next=temp2;
    cout<<&head<<endl;
    display(head);
    return 0;
}
