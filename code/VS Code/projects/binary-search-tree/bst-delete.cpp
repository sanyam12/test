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

node* inordersucc(node* root)
{
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root;
}

node* del(node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data>key)
    {
        root->left = del(root->left,key);
    } else if(root->data<key)
    {
        root->right = del(root->right, key);
    } else
    {
        //case 1
        if(root->right==NULL&& root->left==NULL)
        {
            free(root);
            return NULL;
        }

        //case 2
        if(root->left!=NULL&& root->right==NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }
        if(root->left==NULL&&root->right!=NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }

        //case 3
        if(root->left!=NULL && root->right!=NULL)
        {
            node* temp = inordersucc(root->right);
            root->data = temp->data;
            root->right = del(root->right,temp->data);
            return root;
        }
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
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    inorder(root);
    cout<<endl;
    del(root,4);
    
    inorder(root);
    cout<<endl;
    return 0;
}