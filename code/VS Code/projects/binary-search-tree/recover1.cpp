#include <iostream>
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

void calpointers(node* root, node** first, node** mid, node** last, node** prev)
{
    if(root==NULL)
    {
        return;
    }

    calpointers(root->left,first,mid,last,prev);
    if(*prev!=NULL && root->data < (*prev)->data)
    {
        if(first!=NULL)
        {
            *last = root;
        }
        else
        {
            *first = *prev;
            *mid = root;
        }
    }
    *prev = root;
    calpointers(root->right,first,mid,last,prev);
}

void swap(int* val1, int* val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void restore(node* root)
{
    node *first, *mid, *last, *prev;
    first = mid = last = prev = NULL;

    calpointers(root, &first, &mid, &last, &prev);
    if(first&& last)
    {
        swap(&(first->data), &(last->data));
        // int temp = first->data;
        // first->data = last->data;
        // last->data = temp;
    } else if (first&&mid)
    {
        swap(&(first->data), &(mid->data));
        // int temp = first->data;
        // first->data = mid->data;
        // mid->data = temp;
    }
}

void inorder(node* root)
{
    if(root== NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main ()
{
    node* root = new node(6);
    root->left = new node(9);
    root->right = new node(3);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->right->right = new node(13);
    inorder(root);
    cout<<endl;
    restore(root);
    inorder(root);
    cout<<endl;
    return 0;
}