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

int hieght(node* root)
{
    //base check
    if(root == NULL)
    {
        return 0;
    }
    int lh = hieght(root->left);
    int rh = hieght(root->right);

    return (max(lh, rh)+1);
}

bool balancedCheck(node* root)
{
    //base check
    if(root == NULL)
    {
        return true;
    }
    if(!balancedCheck(root->left))
    {
        return false;
    }
    if(!balancedCheck(root->right))
    {
        return false;
    }

    int lh = hieght(root->left);
    int rh = hieght(root->right);

    if(abs(lh-rh)<=1)
    {
        return true;
    } else
    {
        return false;
    }
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->right = new node(5);
    cout<<balancedCheck(root)<<endl;
    return 0;
}