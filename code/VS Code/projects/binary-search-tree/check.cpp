#include <iostream>
#include <climits>
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

bool checkbts(node* root, int max, int min)
{
    if(root==NULL)
    {
        return true;
    }

    if(checkbts(root->left,root->data,INT_MIN) && checkbts(root->right,INT_MAX,root->data))
    {
        if(root->data>min && root->data<max)
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    // node* root = new node(3);
    // root->left = new node(2);
    // root->left->left = new node(2);
    // root->right = new node(7);
    // root->right->left = new node(5);
    // root->right->right = new node(8);

    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    
    if(checkbts(root,INT_MAX,INT_MIN))
    {
        cout<<"yes\n";
    }else
    {
        cout<<"no\n";
    }
    return 0;
}