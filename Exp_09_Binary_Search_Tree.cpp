#include <iostream>
using namespace std;
struct Node{int data;Node*left;Node*right;};
class BST{Node*root;
 Node*insert(Node*n,int x){if(!n){Node*p=new Node{x,NULL,NULL};return p;}if(x<n->data)n->left=insert(n->left,x);else if(x>n->data)n->right=insert(n->right,x);return n;}
 bool searchNode(Node*n,int x){if(!n)return false;if(x==n->data)return true;if(x<n->data)return searchNode(n->left,x);return searchNode(n->right,x);}
 void inorder(Node*n){if(!n)return;inorder(n->left);cout<<n->data<<" ";inorder(n->right);}
 void preorder(Node*n){if(!n)return;cout<<n->data<<" ";preorder(n->left);preorder(n->right);}
 void postorder(Node*n){if(!n)return;postorder(n->left);postorder(n->right);cout<<n->data<<" ";}
 void clear(Node*n){if(!n)return;clear(n->left);clear(n->right);delete n;}
public:BST():root(NULL){}void insert(int x){root=insert(root,x);cout<<x<<" Inserted\n";}void search(int x){cout<<x<<(searchNode(root,x)?" Found in BST\n":" Not Found in BST\n");}
 void traversals(){cout<<"Inorder: ";inorder(root);cout<<"\nPreorder: ";preorder(root);cout<<"\nPostorder: ";postorder(root);cout<<endl;}~BST(){clear(root);}};
int main(){BST tree;int values[]={50,30,70,20,40,60,80};for(int x:values)tree.insert(x);tree.traversals();tree.search(60);tree.search(25);return 0;}
