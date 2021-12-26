#include <iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int sumReplace(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    root->data += sumReplace(root->left) + sumReplace(root->right);
    return root->data;
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

    sumReplace(root);
    inorder(root);
    cout<<endl;
    return 0;
}