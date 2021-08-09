/*Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

InOrder Traversal is: left root right*/

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

void inOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
//Time Complexity: O(n) Space complexity: O(n)

//This Driver code is just written for the purpose of traversal demonstration.
int main() {

	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

	inOrder(root);
}
