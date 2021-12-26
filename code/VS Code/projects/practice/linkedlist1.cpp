#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void recursive(node* &root, node* &prev, node* &now, node* &ahead)
{
    cout<<now->data<<" ";
    now->next = prev;

    if(ahead->next)
    {
        recursive(root,now,ahead, ahead->next);
    } else
    {
        //update the new root
        root = now;
    }
}

int main ()
{
    node *root = new node(1);
    root->next = new node(2);
    root->next->next = new node(3);
    node *prev = NULL, *ahead = ahead->next, *now = root;
    recursive(root,prev,now,ahead);

    cout<<root->data<<endl;
    return 0;
}