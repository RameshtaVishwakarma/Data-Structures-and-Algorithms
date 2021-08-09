/*Given a binary tree, find its height.


Example 1:

Input:
     1
    /  \
   2    3
Output: 2

The approach is to traverse till the bottom of the tree and then traverse up ahead increasing the length by 1. As soon as we reach the end of left node we will
the compare it with the right node and return the maximum value +1. ! addition is done to consider the current height as well.*/

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

int height(node *node)
{
    if(node == NULL)
    {
        return 0;
    }
    return (max(height(node->left),height(node->right))+1);
}

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}

// Driver code
int main()
{
    node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Height of tree is " << height(root);
    return 0;
}
