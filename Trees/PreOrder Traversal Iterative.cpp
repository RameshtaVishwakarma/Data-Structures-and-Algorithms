#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    //constructor definition
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

//Function for iterative pre-order traversal.
void preorder(Node *root)
{
    //Declaring a stack.
    stack<Node*>s;
    s.push(root);
    while(!s.empty())
    {
        root = s.top();
        s.pop();
        cout<<root->data<<endl;
        if(root->right != NULL)
            s.push(root->right);
        if(root->left != NULL)
            s.push(root->left);
    }
}
//Time Complexity: O(n) Space complexity: O(n)

//This Driver code is just written for the purpose of traversal demonstration.
int main() {

	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

	preorder(root);
}
