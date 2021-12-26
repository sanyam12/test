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

node* balanced(int arr[],int start, int end)
{
    
    int mid = (end+start)/2;
    node* root = new node(arr[mid]);
    if(mid>start)
    {
        root->left = balanced(arr,start,mid-1);
    }
    if(mid<end)
    {
        root->right = balanced(arr,mid+1,end);
    }
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    inorder(root->left);  
    inorder(root->right);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = balanced(arr,0,n-1);
    inorder(root);
    cout<<endl;
    return 0;
}