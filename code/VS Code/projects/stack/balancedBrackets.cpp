#include <iostream>
#include <stack>
using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for(int i=0; i<s.length();i++)
    {
        switch (s[i])
        {
            case '(':
                st.push(s[i]);
                break;
            case '{':
                st.push(s[i]);
                break;
            case '[':
                st.push(s[i]);
                break;
            case ']':
                if(st.top()=='[')
                {
                    st.pop();
                } else
                {
                    return false;
                }
                break;
            case '}':
                if(st.top()=='{')
                {
                    st.pop();
                } else
                {
                    return false;
                }
                break;
            case ')':
                if(st.top()=='(')
                {
                    st.pop();
                } else
                {
                    return false;
                }
                break;
        }
    }
    return true;
}

int main ()
{
    if(balanced("{[()]}"))
    {
        cout<<"balanced\n";
    } else
    {
        cout<<"not balanced\n";
    }
    return 0;
}