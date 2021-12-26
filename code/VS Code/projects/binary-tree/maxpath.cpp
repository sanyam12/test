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

int util(node* root, int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int n = root->data;
    
    int nl = INT_MIN;
    int nr = INT_MIN;
    int nb = INT_MIN;

    nl = util(root->left, ans);
    nr = util(root->right,ans);
    nb = n+nl+nr;
    int newans = max(max(n,n+nl),max(n+nr,nb));
    ans = max(ans, newans);
    int singleans = max(n,max(n+nl,n+nr));
    return singleans;
}

int maxPath(node* root, int &ans)
{
    if(root==NULL)
    {
        return 0;
    }

    //int ans = INT_MIN;
    //util(root,ans);

    int n = root->data;

    int nl = INT_MIN;
    int nr = INT_MIN;
    int nb = INT_MIN;

    nl = maxPath(root->left, ans);
    nr = maxPath(root->right,ans);
    nb = n+nl+nr;
    int newans =INT_MIN;
    newans = max(max(n,n+nl),max(n+nr,nb));
    ans = max(ans, newans);
    int singleans = max(n,max(n+nl,n+nr));
    return singleans;
    //return ans;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(-12);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(-6);
    int ans = INT_MIN;
    cout<<maxPath(root, ans)<<endl;
    return 0;
}