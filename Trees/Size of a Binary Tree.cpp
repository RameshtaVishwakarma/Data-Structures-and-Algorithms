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

//Function to find size of the tree.
int size(Node *root)
{
    if(root == NULL)
        return 0;
    return (1+size(root->left)+size(root->right));
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
    cout<<size(root)<<endl;
    return 0;
}
