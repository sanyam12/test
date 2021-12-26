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

void ins(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head =n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}

void insAtStart(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    head = n;
    head->next=temp;
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

int search(node* head, int key)
{
    int i=0;
    while (head!=NULL)
    {
      if(head->data==key)
        {
            return i;
        } 
        else{
            i++;
            head = head->next;
        }  
    }
    return -1;
}
void deleter(node* &head, int i)
{
    if(head==NULL)
    {
        return;
    }
    if(search(head,i)==0)
    {
        node* todel = head;
        head = head->next;
        delete todel;
        return;
    }
    int pos = search(head, i);
    node* temp = head;
    for(int i=0; i<(pos-1); i++)
    {
        temp = temp->next;
    }
    
    node* todelete = temp->next;
    temp->next = (temp->next)->next;
    delete todelete;
;}
int main ()
{
    node* head = NULL;
    ins(head, 1);
    // ins(head, 2);
    // ins(head, 3);
    // ins(head, 4);
    // ins(head,5);
    // insAtStart(head,0);
    display(head);
    
    deleter(head,1);
    display(head);
    return 0;
}