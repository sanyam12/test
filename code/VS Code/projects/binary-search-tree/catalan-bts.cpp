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

vector<node*> constructBst(int start, int end)
{
    vector<node*> trees;
    if(start>end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end;i++)
    {
        vector<node*> leftsubtree = constructBst(start, i-1);
        vector<node*> rightsubtree = constructBst(i+1, end);
        
        for(int j=0; j<leftsubtree.size(); j++)
        {
            node* left = leftsubtree[j];
            for(int k=0; k<rightsubtree.size(); k++)
            {
                node* right = rightsubtree[k];
                node* root = new node(i);
                root->left = left;
                root->right = right;
                trees.push_back(root);
            }
        }
    }

    return trees;
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void treePrint(vector<node*> trees)
{
    for(int i=0; i<trees.size();i++)
    {
        cout<<i+1<<": ";
        preorder(trees[i]);
        cout<<endl;
    }
}

int main ()
{
    vector<node*> trees = constructBst(1,3);
    treePrint(trees);
    return 0;
}