#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* construct(node* root, int val)
{
    if(root==NULL)
    {
        return (new node(val));
    }

    if(root->data>val)
    {
        root->left = construct(root->left,val);
    } else if(root->data<val)
    {
        root->right = construct(root->right, val);
    }
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

int main ()
{
    int arr[] = {7,5,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = new node(arr[0]);
    for(int i=1;i<n;i++)
    {
        construct(root,arr[i]);
    }

    inorder(root);
    cout<<endl;
    return 0;
}