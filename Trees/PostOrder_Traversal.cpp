/*Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:
5 10 39 1

        1
     /     \
   10     39
  /
5


Example 1:

Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
The traversal is left right root as the name suggest postOrder.*/

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

void postOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
//Time Complexity: O(n) Space complexity: O(n)

//This Driver code is just written for the purpose of traversal demonstration.
int main() {

	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

	postOrder(root);
}
