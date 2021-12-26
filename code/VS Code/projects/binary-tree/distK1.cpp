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
        left = NULL;
        right = NULL;
    }
};

void subtree(node* n, int k)
{
    if(n==NULL)
    {
        return;
    }

    subtree(n->left, k-1);
    subtree(n->right, k-1);
    if(k==0)
    {
        cout<<n->data<<" ";
    }
}

int distK(node* root, node* n, int k)
{
    if(root==NULL)
    {
        return -1;
    }

    if(root==n)
    {
        subtree(root,k);
        return 0;
    }

    int dl = distK(root->left, n,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            subtree(root->right,k-dl-2);
        }
        return dl+1;
    }

    int dr = distK(root->right, n,k);
    if(dr!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            subtree(root->left,k-dr-2);
        }
        return dr+1;
    }
    return -1;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(5);
    root->right = new node(2);
    root->right->left = new node(3);
    root->right->right = new node(4);
    root->left->left = new node(6);
    root->left->left->right = new node(7);
    root->left->left->right->left = new node(8);
    root->left->left->right->right = new node(9);

    node* n = root->left;
    distK(root,n, 3);
    cout<<endl;
    return 0;
}