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
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}

void even(node* head)
{
    node* odd = head;
    node* even = head->next;
    node* backupodd = odd;
    node* backupEven = even;
    
    while (even->next!=NULL && odd->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = backupEven;
    

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
    even(head);
    display(head);
    return 0;
}