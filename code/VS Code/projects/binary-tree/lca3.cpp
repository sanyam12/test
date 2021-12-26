#include <iostream>
#include <vector>
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

bool getpath(node* root,int key, vector<int> &path)
{
    if(root==NULL)
    {
        return false;
    }

    if(root->data==key)
    {
        path.push_back(root->data);
        return true;
    }

    if(getpath(root->left,key,path))
    {
        path.push_back(root->data);
        return true;
    }

    if(getpath(root->right,key,path))
    {
        path.push_back(root->data);
        return true;
    }
    return false;
}

int LCA(node* root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!getpath(root,n1,path1) || !getpath(root, n2, path2))
    {
        return -1;
    }

    int pc;
    for(pc=0; pc<path1.size() && path2.size(); pc++)
    {
        if(path1[pc]!=path2[pc])
        {
            break;
        }
    }
    return pc;
}

node* LCA2(node* root, int n1, int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==n1 || root->data == n2)
    {
        return root;
    }

    node* left = LCA2(root->left, n1,n2);
    node* right = LCA2(root->right, n1,n2);
    if(left!=NULL&&right!=NULL)
    {
        return root;
    }

    if(left!=NULL)
    {
        return left;
    }
    
    return right;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);

    cout<<LCA2(root, 6,7)->data<<endl;
    return 0;
}