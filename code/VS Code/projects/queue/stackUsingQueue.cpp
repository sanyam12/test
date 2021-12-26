#include <iostream>
#include <queue>
using namespace std;

class stack
{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    stack()
    {
        N=0;
    }

    void push(int val)
    {
        q2.push(val);
        N++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp;
        temp = q2;
        q2=q1;
        q1=temp;
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"stack is empty.\n";
            return;
        }
        q1.pop();
        N--;
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"stack is empty.\n";
            return -1;
        }
        return q1.front();
    
    }
    int size()
    {
        return N;
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main ()
{
    stack st;
    st.push(1);
    
    
    cout<<st.top()<<endl;
    st.pop();
    if(st.empty())
    {
        cout<<"stack is now empty.\n";
    }
    return 0;
}