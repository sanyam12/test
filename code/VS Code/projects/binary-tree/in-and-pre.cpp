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

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <=end; i++)
    {
        if (inorder[i]==curr)
        {
            return i;
        }
        
    }
    return -1;
}

node* makeTree(int preorder[], int inorder[], int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int i =0;
    int curr = preorder[i];
    i++;
    node* n = new node(curr);
    if(start == end)
    {
        return n;
    }
    int pos = search(inorder, start, end, curr);
    n->left = makeTree(preorder,inorder,start,pos-1);
    n->right = makeTree(preorder, inorder, pos+1, end);
    return n;
}

void inorderPrint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main ()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    node* root = makeTree(preorder, inorder, 0,4);
    inorderPrint(root);
    cout<<endl;
    return 0;
}