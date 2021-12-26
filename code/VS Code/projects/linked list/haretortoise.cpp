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

void cyceldel(node* &head, node* common)
{
    node* temp = head;
    while (temp->next!=common->next)
    {
        temp = temp->next;
        common = common->next;
    }
    //cout<<common->data<<endl;
    common->next=NULL;
}

bool hare(node* head)
{
    node* slow = head;
    node* fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            cyceldel(head, fast);
            return true;
        }
    }
    return false;
}

void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode = head;
    int count =1;
    while (temp->next !=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next=startNode;
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
    makeCycle(head, 3);
    cout<<hare(head)<<endl;
    display(head);
    return 0;
}