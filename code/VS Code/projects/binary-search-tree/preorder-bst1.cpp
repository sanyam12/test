#include <iostream>
#include <climits>
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

node* construct(int preorder[], int* preorderidx, int key, int n, int min, int max)
{
    if(*preorderidx>=n)
    {
        return NULL;
    }
    node* root = NULL;
    if(key>min&&key<max)
    {
        root = new node(key);
        *preorderidx++;
        if(*preorderidx<n)
        {
            root->left = construct(preorder,preorderidx,preorder[*preorderidx],n,min,key);
        }

        if(*preorderidx<n)
        {
            root->right = construct(preorder,preorderidx,preorder[*preorderidx],n,key,max);
        }
    }
    return root;
}

int main ()
{
    int preorder[] = {7,5,4,6,8,9};
    int i =0;
    
    node* root = construct(preorder,&i,preorder[0],6,INT_MIN,INT_MAX);
    return 0;
}