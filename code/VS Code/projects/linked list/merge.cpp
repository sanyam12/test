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
    if(head ==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
}
void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

node* merge(node* head1, node* head2)
{
    node* dummy;
    node* ptr = dummy;
    //int i=0;
    
    while (head1!=NULL && head2!=NULL)
    {

        if(head1->data > head2->data)
        {
            cout<<"head2\n";
            ptr->next = head2;
            ptr=ptr->next;
            head2 = head2->next;
        } else
        {
            cout<<"head1\n";
            ptr->next = head1;
            ptr = ptr->next;
            head1 = head1->next;
        }
    }
    
    while(head1!=NULL)
    {
        cout<<"head1\n";
        ptr->next = head1;
        ptr = head1;
        head1 = head1->next;
    } 
    
    while(head2!=NULL)
    {
        cout<<"head2\n";
        ptr->next = head2;
        ptr=ptr->next;
        head2 = head2->next;
    }

    return dummy->next;
}

node* mergeRecursive(node* head1, node* head2)
{
    if(head1==NULL)
    {
        return head2;
    } else if(head2==NULL)
    {
        return head1;
    }

    node* result;
    if(head1->data <head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    } else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main ()
{
    node* head1 = NULL;
    
    int arr1[] = {1,4,5,7};
    for(int i=0; i<4;i++)
    {
        insert(head1, arr1[i]);
    }
    display(head1);
    node* head2 = NULL;
    
    int arr2[] = {2,3,6};
    for(int i=0; i<3;i++)
    {
        insert(head2, arr2[i]);
    }
    display(head2);
    node* newhead = mergeRecursive(head1, head2);
    display(newhead);
    return 0;
}