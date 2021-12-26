#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> str, int temp)
{
    stack<int> call;
    for(int i=1;i<str.size();i++)
    {
        call.push(str.top());
        str.pop();
    }
    str.push(temp);
    for(int i=1;i<call.size();i++)
    {
        str.push(call.top());
        call.pop();
    }
    
}

void try1(stack<int> &str, int val)
{
    stack<int> call;
    while (!str.empty())
    {
        call.push(str.top());
        str.pop();
    }
    str.push(val);
    
    while (!call.empty())
    {
        str.push(call.top());
        call.pop();
    }
}

void try2(stack<int> &str, int val)
{
    if(str.empty())
    {
        str.push(val);
        return;
    }

    int topele = str.top();
    str.pop();
    try2(str,val);
    str.push(topele); 
}

void stackReverse(stack<int> &str)
{
    if(str.empty())
    {
        return;
    }
    int temp = str.top();
    str.pop();
    stackReverse(str);
    try1(str, temp);
}

int main ()
{
    stack<int> str;
    for(int i=1; i<=5;i++)
    {
        str.push(i);
    }
    
    stackReverse(str);
    
    while (!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }cout<<endl;
    return 0;
}