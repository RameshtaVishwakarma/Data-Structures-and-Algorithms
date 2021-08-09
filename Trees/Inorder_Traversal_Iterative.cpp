#include<bits/stdc++.h>
using namespace std;

//Doubly Linked List to implement the tree.
struct Node{
    int data;
    Node* left;
    Node* right;
    //constructor
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

//Function for iterative in-order Traversal.
void inorder(Node *root)
{
    //Edge Case:
    if(root == NULL)
        cout<<"Tree Empty"<<endl;
    //Initializing a stack.
    stack<Node*> s;
    Node *curr = root;
    while(curr != NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        cout<<curr->data<<endl;
        s.pop();
        curr = curr->right;
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

	inorder(root);
}
