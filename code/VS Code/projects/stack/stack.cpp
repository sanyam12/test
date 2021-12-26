#include <iostream>
using namespace std;
# define n 100

class stack
{
    int* arr;
    int top;
    public:
        stack()
        {
            arr = new int[n];
            top = -1;
        }

        void push(int val)
        {
            if(top==n-1)
            {
                cout<<"stack overflow.\n";
                return;
            }
            top++;
            arr[top] = val;
        }
        
        void pop()
        {
            if(top==-1)
            {
                cout<<"stack is empty.\n";
                return;
            }
            top--;
        }

        int Top()
        {
            if(top==-1)
            {
                cout<<"no element to top.\n";
                return -1;
            }
            return arr[top];
        }
        bool empty()
        {
            if(top==-1)
            {
                return true;
            }
            return false;
        }

};

int main ()
{
    stack st;
    
    return 0;
}