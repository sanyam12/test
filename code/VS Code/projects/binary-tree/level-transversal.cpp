#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int main ()
{
    node* root = new node(5);
    root->left = new node(6);
    root->right = new node(3);
    root->left->left = new node(9);
    root->left->right = new node(1);
    root->right->left = new node(2);
    root->right->right = new node(1);
    root->left->right->left = new node(2);
    root->left->right->left->left = new node(3);
    root->left->right->left->right = new node(5);
    root->right->left->right = new node(6);
    root->right->left->right->right = new node(7);
    queue<node*> q;
    string s;
    q.push(root);
    q.push(NULL);
    int count = 0;
    int ans = 0;
    int k =4;
    bool start = false;
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            count++;
            if(count==k)
            {
                start = true;
            } else if(count>k)
            {
                start = false;
            }
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        } else
        {
            if(start)
            {
                ans+=q.front()->data;
            }
            s.append(to_string(q.front()->data));
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
    if(k==0)
    {
        cout<<root->data<<endl;
    }else
    {
        cout<<ans<<endl;
    }
    return 0;
}