#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;
    stack<int> s2;
public:
    
    void push(int val)
    {
        s1.push(val);
    }

    int pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"Queue is empty.\n";
            return -1;
        }

        
    }
};

int main ()
{
    return 0;
}