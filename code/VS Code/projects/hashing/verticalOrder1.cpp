#include <bits/stdc++.h>
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

void fun(node* root, int h, map<int,vector<int> > &m)
{
    if(root == NULL)
    {
        return;
    }
    m[h].push_back(root->data);
    fun(root->left,h-1,m);
    fun(root->right,h+1,m);
}

void vertical(node* root)
{
    map<int, vector<int> > m;
    fun(root,0,m);
    for(auto i=m.begin(); i!=m.end(); i++)
    {
        for(auto j=((i->second).begin()) ; j!=((i->second).end()); j++)
        {
            cout<<*j<<" ";
        }
    }
    cout<<endl;
}

int main ()
{
    node* root = new node(10);
    root->left = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right = new node(4);
    root->right->left = new node(14);
    root->right->right = new node(6);

    vertical(root);
    return 0;
}