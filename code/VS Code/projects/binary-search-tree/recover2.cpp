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

void calpointer(node* root, node** first, node** mid, node** last, node** prev)
{
    if(root==NULL)
    {
        return;
    }
    calpointer(root->left,first,mid,last,prev);

    if(*prev!=NULL && root->data <(*prev)->data)
    {
        if(*first==NULL)
        {
            *first = *prev;
            *mid = root;
        } else
        {
            *last = root;
        }
    }
    *prev = root;
    calpointer(root->right,first,mid,last,prev);
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
    calpointer(root,&first,&mid,&last,&prev);
    if(first&&last)
    {
        swap(&(first->data),&(last->data));
        
    }   else if(first&& mid)
    {
        swap(&(first->data),&(mid->data));
        
    }

}

void inorder(node* root)
{
    if(root==NULL)
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
    root->right->right = new node(13);
    root->left->left = new node(1);
    root->left->right = new node(4);

    inorder(root);
    cout<<endl;
    restore(root);
    inorder(root);
    cout<<endl;
    return 0;
}