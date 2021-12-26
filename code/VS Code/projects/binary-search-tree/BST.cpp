#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = right =NULL;
    }
};

node* insert(node* root, int val)
{
    if(root==NULL)
    {
        return ( new node(val) );
    }

    if(val<root->data)
    {
        root->left = insert(root->left, val);
    } else
    {
        root->right = insert(root->right, val);
    }
    return root;
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
    int arr[] = {5,1,3,4,2,7};
    node* root = new node(arr[0]);
    for(int i=1; i<6;i++)
    {
        insert(root,arr[i]);
    }

    inorder(root);
    cout<<endl;
    return 0;
}