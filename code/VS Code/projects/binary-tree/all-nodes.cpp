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

int allNodes(node* root)
{
    if(root ==NULL)
    {
        return 0;
    }
    int count = 0;
    count = allNodes(root->left) + allNodes(root->right) + 1;
    return count;
}

int sumAll(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ans = 0;
    ans = sumAll(root->right) + sumAll(root->left) + root->data;
    return ans;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->right->left = new node(8);
    root->left->right->left->left = new node(9);
    root->left->right->left->right = new node(10);
    root->right->left->right = new node(11);
    root->right->left->right->right = new node(12);
    cout<<allNodes(root)<<endl;
    cout<<sumAll(root)<<endl;
    return 0;
}