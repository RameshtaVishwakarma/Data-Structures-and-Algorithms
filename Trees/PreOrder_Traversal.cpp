/*Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1
      /
    4
  /    \
4       2
Output: 1 4 4 2
The traversal technique is root left right as the name suggest preOrder.*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
  Node(int k){
      data=k;
      left=right=NULL;
  }
};

void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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
