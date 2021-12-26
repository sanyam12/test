#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* previous;
    node* next;
    node(int val)
    {
        data = val;
        previous = NULL;
        next = NULL;
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
    n->previous=temp;
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

void reversedisplay(node* head)
{
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->previous;
    }
    cout<<"NULL\n";
}

void inserthead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    head->previous=n;
    head = n;
}

void deletion(node* &head, int pos)
{
    node* temp = head;
    if(pos==1)
    {
        head = head->next;
        delete head->previous;
        return;
    }
    int count = 1;
    while (temp!=NULL && pos!=count)
    {
        temp = temp->next;
        count++;
    }

    temp->previous->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->previous=temp->previous;
    }
    
    delete temp;
}

void kappend(node* &head, int k)
{
    if(k==1)
    {
        return;
    }
    node* oldhead = head;
    node* oldtail = head;
    while (oldtail->next!=NULL)
    {
        oldtail = oldtail->next;
    }
    node* newhead =head;
    node* newtail = head;
    int counter = 1;
    while (newhead->next!=NULL && counter!=k)
    {
        if(counter==(k-1))
        {
            newtail = newhead;
        }
        newhead = newhead->next;
        counter++;
    }

    newtail->next = NULL;
    oldtail->next = head;
    head = newhead;
}

int main ()
{
    node* head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    //inserthead(head,0);
    display(head);

    kappend(head, 5);
    display(head);
    return 0;
}