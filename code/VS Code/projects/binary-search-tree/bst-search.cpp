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

node* search(node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data==key)
    {
        return root;
    } else if(root->data>key)
    {
        return search(root->left, key);
    } else
    {
        return search(root->right, key);
    }
}

int main ()
{
    int arr[] = {4,2,5,1,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = new node(arr[0]);
    for(int i=1; i<n;i++)
    {
        insert(root,arr[i]);
    }

    if(search(root,10)==NULL)
    {
        cout<<"key doesn't exist.\n";
    } else
    {
        cout<<"key exists.\n";
    }
    return 0;
}