#include <iostream>
#include <stack>
using namespace std;

int main ()
{
    string s;
    cin>>s;
    stack<char> st;
    bool ans = false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(s[i]=='(')
            {
                ans = true;
            }
            while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
            {
                //cout<<st.top();
                st.pop();
            }
            //cout<<st.top();
            st.pop();
        }
    }
    cout<<ans<<endl;
    return 0;
}