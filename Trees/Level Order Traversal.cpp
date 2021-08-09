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

//function to print level order
void levelOrderTraversal(Node *root)
{
    vector<int> result;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *curr = q.front();
        cout<<curr->data<<endl;

        //pop the item from the queue and check if it has left or right branches
        q.pop();

        if(curr->left)
        {
            q.push(curr->left);
        }
        if(curr->right)
        {
            q.push(curr->right);
        }
    }
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
    cout << "Level Order traversal of binary tree is \n";
    levelOrderTraversal(root);
    return 0;
}
