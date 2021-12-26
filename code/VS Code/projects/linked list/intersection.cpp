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

void intersect(node* &head1, node* &head2, int pos)
{
    if(head2==NULL ||head1==NULL)
    {
        return;
    }
    node* temp = head1;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    node* temp2 = head2;
    int count =1;
    while (temp2->next!=NULL && count!=pos)
    {
        temp2=temp2->next;
        count++;
    }
    
    temp->next=temp2;
    //cout<<temp->data<<" "<<temp2->data<<endl;
}

int length(node* head)
{
    int count =0;
    if(head==NULL)
    {
        return 0;
    }
    while (head!=NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

bool isInterseaction(node* head1, node* head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    node* ptr1;
    node* ptr2;
    int d=0;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    } else
    {
        d=l2-l1;
        ptr2 = head2;
        ptr1 = head1;
    }
    int count =1;
    while (count!=d)
    {
        ptr1 = ptr1->next;
        count++;
    }
    //cout<<ptr2->data;
    while (ptr1->next!=NULL)
    {
        ptr1 = ptr1->next;
        //cout<<ptr1->data<<" "<<ptr2->data<<endl;
        if(ptr1==ptr2)
        {
            return true;
        }
        if(ptr2->next!=NULL)
        {
            ptr2 = ptr2->next;
        }
    }
    return false;
}

int main ()
{
    node* head1 = NULL;
    
    int arr1[] = {1,2,3,4,5};
    for(int i=0; i<5;i++)
    {
        insert(head1, arr1[i]);
    }
    //display(head1);
    node* head2 = NULL;
    
    int arr2[] = {6,7,8,9,10};
    for(int i=0; i<5;i++)
    {
        insert(head2, arr2[i]);
    }
    //display(head2);

    intersect(head1, head2,1);
    display(head1);
    display(head2);
    cout<<isInterseaction(head1,head2)<<endl;;
    return 0;
}