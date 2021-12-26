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

void insert(node* &root, int val)
{
    node* n = new node(val);
    if(root==NULL)
    {
        root = n;
        return;
    }
    node* temp = root;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
}

void display(node* root)
{
    node* temp = root;
    for(int i=0;i<3;i++)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(node* &root)
{
    node *prev = NULL, *now = root, *ahead = root->next;
    while (now!=NULL)
    {
        now->next = prev;
        prev = now;
        now = ahead;
        if(ahead)
            ahead = ahead->next;
    }
    root = prev;
}

int main()
{
    node* n = NULL;
    insert(n,1);
    insert(n,2);
    insert(n,3);
    display(n);
    reverse(n);
    display(n);
    return 0;
}