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
    int min;
    int max;
    int ans;
    bool isBTS;
};

info largestBTS(node* root)
{
    if(root == NULL)
    {
        return {0,INT_MAX,INT_MIN,0,true};
    }

    if(root->left==NULL && root->right==NULL)
    {
        return {1,root->data,root->data,1,true};
    }

    info left = largestBTS(root->left);
    info right = largestBTS(root->right);
    info curr;
    if(left.isBTS && right.isBTS && left.max<root->data && right.min>root->data)
    {
        curr.min = min(root->data, min(right.min, left.min));
        curr.max = max(root->data, max(right.max, left.max));

        curr.size = left.size + right.size +1;
        curr.ans = curr.size;
        curr.isBTS = true;
        return curr;
    }
    else
    {
        curr.isBTS = false;
        curr.ans = max(left.ans, right.ans);
        return curr;
    }
}

int main ()
{
    node* root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout<<largestBTS(root).ans<<endl;
    return 0;
}