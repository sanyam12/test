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

void leftView(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    cout<<root->data<<" ";
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            q.pop();
            if(!q.empty())
            {
                cout<<q.front()->data<<" ";
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
    cout<<endl;
    return;
}

int main ()
{
    node* root = new node(5);
    root->left = new node(3);
    root->right = new node(6);
    root->left->left = new node(2);
    root->left->right = new node(4);
    

    leftView(root);
    return 0;
}