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
    curr.push(root);
    bool right = true;
    while(!curr.empty())
    {
        node* temp = curr.top();
        curr.pop();
        if(temp)
        {
            cout<<temp->data<<" ";
        }

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
}

int main ()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->right = new node(5);
    root->left->right->left = new node(6);
    root->left->right->right = new node(7);

    zigzag(root);
    cout<<endl;
    return 0;
}