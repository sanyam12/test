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

int hieght(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    int hieght = 0;
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            hieght++;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
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
    //cout<<hieght<<endl;
    return hieght;
}

int diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lhieght = hieght(root->left);
    int rhieght = hieght(root->right);
    int curr = lhieght + rhieght + 1;

    int rdiameter = diameter(root->right);
    int ldiameter = diameter(root->left);

    return max(curr, max(rdiameter, ldiameter));
}
int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    cout<<hieght(root)<<endl;
    cout<<diameter(root)<<endl;
    // queue<node*> q;
    // q.push(root);
    // q.push(NULL);

    // int hieght = 0;
    // while(!q.empty())
    // {
    //     if(q.front()==NULL)
    //     {
    //         hieght++;
    //         q.pop();
    //         if(!q.empty())
    //         {
    //             q.push(NULL);
    //         }
    //     }
    //     else
    //     {
    //         if(q.front()->left!=NULL)
    //         {
    //             q.push(q.front()->left);
    //         }
    //         if(q.front()->right!=NULL)
    //         {
    //             q.push(q.front()->right);
    //         }
    //         q.pop();
    //     }
    // }
    // cout<<hieght<<endl;
    return 0;
}