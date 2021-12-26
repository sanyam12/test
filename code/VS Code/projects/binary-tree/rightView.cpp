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

void rightView(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        if(q.front()==NULL)
        {
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
            int temp = q.front()->data;
            q.pop();
            if(q.front()==NULL)
            {
                cout<<temp<<" ";
            }
        }
    }
    cout<<endl;
    return;
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->right = new node(7);

    rightView(root);
    return 0;
}