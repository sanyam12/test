#include <iostream>
#include <stack>
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

void zigzag(node* root)
{
    stack<node*> curr;
    stack<node*> next;
    bool right = true;
    curr.push(root);

    while(!curr.empty() || !next.empty())
    {
        node* temp = curr.top();
        cout<<temp->data<<" ";
        curr.pop();

        if(right)
        {
            if(temp->left)
            {
                next.push(temp->left);
            }
            if(temp->right)
            {
                next.push(temp->right);
            }
        } else
        {
            if(temp->right)
            {
                next.push(temp->right);
            }
            if(temp->left)
            {
                next.push(temp->left);
            }
        }

        if(curr.empty())
        {
            if(right)
            {
                right = false;
            } else
            {
                right = true;
            }
            
            stack<node*> temp = curr;
            curr = next;
            next = temp;
        }
    }

    cout<<endl;
}

int main ()
{
    node* root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);

    zigzag(root);
    //cout<<endl;
    return 0;
}