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

//Function to print level order line by line
void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);

    while(true)
    {
        int size = q.size();
        if(size <= 0)
            break;
        while(size--)
        {
            Node *curr = q.front();
            cout<<curr->data<<" ";
            q.pop();
            //Check for left and right branches
            if(curr->left)
            {
                q.push(curr->left);
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
        }
        cout<<endl;
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
