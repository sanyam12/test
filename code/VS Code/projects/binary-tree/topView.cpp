#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void leftside(node* root)
{
    if(root->left!=NULL)
    {
        leftside(root->left);
    }
    
    cout<<root->data<<" ";
}

void rightside(node* root)
{
    if(root->right!=NULL)
    {
        rightside(root->right);
    }

    
    cout<<root->data<<" ";
}

void topView(node* root)
{
    leftside(root->left);
    cout<<root->data<<" ";
    rightside(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);
    root->right->right = new node(7);

    inorder(root);
    cout<<endl;
    return 0;
}