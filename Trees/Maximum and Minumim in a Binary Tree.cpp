#include<bits/stdc++.h>
using namespace std;

//Class Node as a skeleton of doubly Linked List
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    //constructor
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

//Function to find maximum
int maximum(Node *root)
{
    //Base case
    if(root == NULL)
        return INT_MIN;

    //Recursive call
    return max(root->data, max(maximum(root->left),maximum(root->right)));
}

int minimum(Node *root)
{
        //Base case
    if(root == NULL)
        return INT_MAX;

    //Recursive call
    return min(root->data, min(maximum(root->left),maximum(root->right)));
}

//Driver Code:
int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout<<maximum(root)<<endl;
    cout<<minimum(root)<<endl;
    return 0;
}
