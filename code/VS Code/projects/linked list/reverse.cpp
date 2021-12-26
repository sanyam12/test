#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head =n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next= n;
}

void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void reverse(node* &head, int n)
{
    node* prev = NULL;
    node* current = head;
    node* next = head->next;

    for(int i=1; i<=n; i++)
    {
        current->next = prev;
        prev = current;
        current = next;
        if(next!=NULL)
        {
            next = next->next;
        }
    }
    head = prev;
}

node* recursivereverse (node* &head)
{
    if(head ==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = recursivereverse(head->next);
    (head->next)->next = head;
    head->next = NULL;
    return newhead;
}

node* reversek(node* &head, int k)
{
    node* prevptr = NULL;
    node* current = head;
    node* nextptr;

    int count = 0;
    while (current!=NULL && count<k)
    {
        nextptr = current->next;
        current->next = prevptr;
        prevptr = current;
        current = nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main ()
{
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    node* newhead = reversek(head, 2);
    display(newhead);
    display(head);
    return 0;
}