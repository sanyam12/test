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

int search(int inorder[], int start, int end, int curr)
{
    for(int i=start; i<=end; i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

node* makeTree(int postorder[], int inorder[], int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int i=4;
    int curr = postorder[i];
    i--;
    node* n = new node(curr);
    int pos = search(inorder, start, end, curr);
    n->right = makeTree(postorder, inorder, pos+1, end);
    n->left = makeTree(postorder, inorder, start, pos-1);
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
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    node* root = makeTree(postorder, inorder, 0, 4);
    inorderPrint(root);
    cout<<endl;
    return 0;
}