#include <iostream>
#include <queue>
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

void diskK(node* n, int k)
{
    queue<node*> q;
    q.push(n);
    q.push(NULL);

    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            k--;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        } else
        {
            if(k==0)
            {
                cout<<q.front()->data<<" ";
            }

            if(q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }

            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
    }
}

int print(node* root, node* n, int k)
{
    if(root==NULL)
    {
        return -1;
    }

    if(root==n)
    {
        diskK(root,k);
        return 0;
    }

    int dl = print(root->left,n,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        } else
        {
            diskK(root->right,k-dl-2);
        }
        return dl+1;
    }

    int dr = print(root->right,n,k);
    if(dr!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        } else
        {
            diskK(root->left,k-dr-2);
        }
        return dr+1;
    }
    return -1;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(5);
    root->right = new node(2);
    root->right->left = new node(3);
    root->right->right = new node(4);
    root->left->left = new node(6);
    root->left->left->right = new node(7);
    root->left->left->right->left = new node(8);
    root->left->left->right->right = new node(9);

    node* n = root->left;

    print(root,n,3);
    cout<<endl;
    return 0;
}