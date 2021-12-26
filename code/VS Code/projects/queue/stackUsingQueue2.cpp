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

    void pop()
    {
        if(q1.empty())
        {
            cout<<"stack is empty.\n";
            return;
        }

        for(int i=0; i<(N-1); i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q2.pop();
        N--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void push(int val)
    {
        q1.push(val);
        N++;
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"stack is empty.\n";
            return -1;
        }

        for(int i=0; i<(N-1); i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(q1.front());

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return ans;
    }
    int size()
    {
        return N;
    }
};

int main ()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    return 0;
}