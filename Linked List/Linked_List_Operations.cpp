#include<bits/stdc++.h>
using namespace std;

/*Linked list: chain of memory blocks, not necessarily contiguous memory location. Creates a memory over heap and the pointer to that memory is mostly
stored in the stack data frame. head->1->2->3->4->5 this is a 2d rough representation. Linked list operations are really simple, the only thing to keep
in mind is to handle the edge cases. */


//Structure to declare the node of linked list. It can be a class but classes are private which would make program lengthy.
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

//Insert at beginning in linked list. Passing the head of the list. Return a pointer to the head of the list, after inserting in the beginning.
//Pointer function represented using *, and since the data type is object Node hence type casted to Node.
Node *insertAtBeginning(Node *head, int x)
{
    Node  *temp = new Node(x);
    temp->next = head;
    return temp;
    //Since temp is a pointer the function is type casted to *
}
//Time Complexity: O(1) Space Complexity:O(1)

//Insert at the end in linked List. Passing the head pointer. Return a pointer pointing to the head of the List, after inserting element at the end.
Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    //Handling the edge cases.
    if(head == NULL)
    {
        return temp;
    }
    Node *traverse = head;
    while(traverse->next != NULL)
    {
        traverse = traverse->next;
    }
    traverse->next=temp;

    return head;
}
//Time complexity:O(n)

//Delete from beginning in a linked list. Passing the head pointer we need to return the head pointer.
Node *deleteFromBeginning(Node *head)
{
    //handling edge cases
    if(head == NULL)
    {
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}
//Time Complexity: O(1)

//Delete from the end of the linked list. passing the head pointer we need to delete the element and return the head pointer.
Node *deleteFromEnd(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head->next;
        head->next = NULL;
    }
    Node *traverse = head;
    while(traverse->next != NULL)
    {
        traverse = traverse->next;
    }
    delete traverse->next;
    traverse->next = NULL;

    return head;
}
//Time Complexity: O(n)

//Insert at a given position in Linked List. Given the head pointer, return the head pointer.
Node *insertAtGivenPosition(Node *head, int x, int pos)
{
    Node *element = new Node(x);
    if(pos == 1)
    {
        element->next = head;
        return element;
    }
    int length = 1;
    Node *temp = head;
    while(length != pos-1 && temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    if(temp == NULL)
    {
        return head;
    }else
    {
        element->next = temp->next;
        temp->next = element;
    }
    return head;
}
//Time Complexity:O(n) Space Complexity:O(1)

//Delete at a given position in Linked List. Given the head pointer, return the head pointer.
Node *deleteAtGivenPosition(Node *head, int pos)
{
    Node *temp = head;
    Node *found{nullptr};
    if(pos == 1)
    {
        found = head->next;
        delete head;
        return found;
    }
    int length = 1;
    while(length != pos-1 && temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    if(temp == NULL || temp->next == NULL)
    {
        return head;
    }else{
        found = temp->next->next;
        delete temp->next;
        temp->next = found;
    }
    return head;
}
//Time Complexity:O(n) Space Complexity:O(1)


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
    display(head);
    //write your own main function.

    return 0;
}
