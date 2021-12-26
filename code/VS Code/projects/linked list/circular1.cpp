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
void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    
    if(head == NULL)
    {
        n->next =n;
        head = n;
        return;
    }

    while (temp->next!=head)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    n->next = head;
}
void display(node* &head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    } while (temp!=head);
    cout<<"NULL\n";
}
void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void deletion(node* &head, int pos)
{
    int count = 1;
    
    node* temp = head;
    while ( (temp->next!=head) && ((pos-1) != count) )
    {
        temp = temp->next;
        count++;
    }

    if(pos==1)
    {
        temp->next=head->next;
        node* to = head;
        head = head->next;
        delete to;
    }
    node* to = temp->next;
    temp->next = to->next;
    delete to;
}

void deleter(node* head, int pos)
{
    
    node* temp = head;
    int count =1;
    while (count!= pos-1)
    {
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

}
int main ()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    //insertAtHead(head, 0);
    display(head);
    deleter(head, 1);
    display(head);
    return 0;
}