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
        next =NULL;
    }
};

void insert(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}

node* reversek(node* &head, int k)
{
    node* prev = NULL;
    node* current = head;
    node* nextptr;
    int count = 0;
    while (current!=NULL && count<k)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        count++;
    }
    
    head = prev;
    prev = prev->next;
    if(nextptr!=NULL)
    {
        prev->next = reversek(nextptr, k);
    }
    
    return head;
}

int main ()
{
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    display(head);

    reversek(head, 2);
    display(head);
    return 0;
}