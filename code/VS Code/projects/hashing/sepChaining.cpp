#include <iostream>
#include <vector>
using namespace std;
#define N 1000
struct node
{
    node* next;
    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }

    void addNode(node* &start, int val)
    {
        node* n = new node(val);
        if(start == NULL)
        {
            start = n;
            return;
        }

        node* temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
    }

};

struct hashing
{
    vector<node*> table;

    hashing()
    {
        table = vector<node*> (N,NULL);
    }
    
    int hash1(int val)
    {
        return (val/10);
    }

    void insert(int val)
    {
        int i = hash1(val);

        if(table[i]==NULL)
        {
            table[i] = new node(val);
        } else
        {
            node* temp = table[i];
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = new node(val);
        }
    }
    
    node* search(int val)
    {
        node* s = table[hash1(val)];
        while (s->data!=val)
        {
            if(s->next==NULL)
            {
                return NULL;
            }
            s = s->next;
        }
        return s;
    }

    
};

int main ()
{
    hashing table;
    table.insert(1);
    table.insert(2);
    table.insert(3);
    table.insert(10);
    node* three = table.search(11);
    if(three!=NULL)
        cout<<three->data<<endl;
    return 0;
}