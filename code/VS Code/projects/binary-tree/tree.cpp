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

int main ()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout<<"   "<<root->data<<endl;
    cout<<" "<<root->left->data<<"   "<<root->right->data<<endl;
    cout<<root->left->left->data<<" "<<root->left->right->data<<endl;
    return 0;
}