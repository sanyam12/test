#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left==NULL;
        right==NULL;
    }
};

node* LCA(node* root, int n1, int n2)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data ==n1 || root->data == n2)
    {
        return root;
    }

    node* left = LCA(root->left, n1,n2);
    node* right = LCA(root->right, n1,n2);

    if(left!=NULL && right!=NULL)
    {
        return root;
    }

    if(left==NULL && right==NULL)
    {
        return NULL;
    }

    if(left!=NULL)
    {
        return left;
    }
    
    return right;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);

    cout<<LCA(root,6,7)->data<<endl;
    return 0;
}