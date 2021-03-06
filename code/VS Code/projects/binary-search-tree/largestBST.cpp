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

struct info
{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

info largestBST(node* root)
{
    if(root==NULL)
    {
        return {0,INT_MIN, INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL)
    {
        return {1,root->data,root->data,1,true};
    }

    info left = largestBST(root->left);
    info right = largestBST(root->right);
    
    info curr;
    curr.size = (1 + left.size + right.size);

    if(left.isBST && right.isBST && left.max<root->data && right.min>root->data)
    {
        curr.min = min(min(left.min,right.min),root->data);
        curr.max = max(right.max, max(left.max,root->data));

        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    } else
    {
        curr.ans = max(left.ans, right.ans);
        curr.isBST = false;
        return curr;
    }
}

int main()
{
    node* root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout<<largestBST(root).ans<<endl;
    return 0;
}