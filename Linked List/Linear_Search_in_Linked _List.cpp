#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    //Constructor
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int linearSearch(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while(curr != NULL)
    {
        if(curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

//Helper Functions for main
void push(Node **head, int x)
{
    Node *temp = new Node(x);
    temp->next = (*head);
    *head = temp;

}
void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
}

int main()
{
    Node *head = NULL;
    push(&head,7);
    push(&head,3);
    push(&head,9);
    cout<<linearSearch(head,12)<<endl;
    return 0;
}
