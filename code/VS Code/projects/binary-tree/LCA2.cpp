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

node* lca(node* root, int n1, int n2)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data==n1 || root->data ==n2)
    {
        return root;
    }

    node* left = lca(root->left,n1,n2);
    node* right = lca(root->left,n1,n2);

    if(left==NULL && right==NULL)
    {
        return NULL;
    }

    if(left!=NULL && right !=NULL)
    {
        return root;
    }

    if(left!=NULL)
    {
        return left;
    }

    return right;
}

int dista(node* root, int k, int dist)
{
    if(root==NULL)
    {
        return -1;
    }

    if(root->data==k)
    {
        return dist;
    }

    int left = dista(root->left, k, dist+1);

    if(left!=-1)
    {
        //cout<<left<<" ";
        return left;
    }
    return dista(root->right, k, dist+1);
}

int total(node* root, int n1, int n2)
{
    node* LCA = lca(root, n1,n2);
    int d1 = dista(LCA, n1,0);
    int d2 = dista(LCA, n2, 0);

    return d1+d2;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);

    cout<<total(root, 4,5)<<endl;
    //total(root, 4,5);
    return 0;
}