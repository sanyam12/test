#include <iostream>
using namespace std;

class node
{
public:
    node* next;
    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
public:
    node* front;
    node* back;

    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node* n = new node(val);
        if(front==NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if(front==NULL)
        {
            cout<<"queue underflow.\n";
            return;
        }
        node* todelete = front;
        front = front->next;
        delete  todelete;
    }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"queue underflow.\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }
};

int main ()
{ 
    return 0;
}