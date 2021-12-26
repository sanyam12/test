#include <iostream>
using namespace std;
#define n 100

class queue
{
    int* arr;
    int front;
    int back;
public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if(back==n-1)
        {
            cout<<"queue overflow.\n";
            return;
        }
        back++;
        arr[back]=val;
        if(front==-1)
        {
            front++;
        }
        return;
    }

    void pop()
    {
        if(front>back || front==-1)
        {
            cout<<"queue is empty.\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1||front>back)
        {
            cout<<"empty queue.\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front>back || front==-1)
        {
            return true;
        }
        return false;
    }    
};

int main ()
{
    queue q;
    q.push(1);
    q.push(2);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    if(q.empty())
    {
        cout<<"queue is empty.\n";
    }

    cout<<q.peek()<<endl;
    return 0;
}