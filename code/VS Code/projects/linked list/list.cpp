#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node (int val)
    {
        data = val;
        next=NULL;
    }
};

node* insert(node* head, int val, int extra)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return head;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next = n;
    return head;
}

void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<(temp->data)<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main ()
{
    node* head = NULL;
    head = insert(head,1,0);
    head = insert(head,2,0);
    head = insert(head,3,0);
    head = insert(head,4,0);

    display(head);
    return 0;
}