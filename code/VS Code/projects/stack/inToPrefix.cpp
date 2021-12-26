#include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if (c=='+'||c=='-')
    {
        return 1;
    }
    else 
    {
        return -1;
    }
}

string intopre(string s)
{
    stack<char> str;
    string res;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
            str.push(s[i]);
        }
        else if(s[i]==')')
        {
            while (!str.empty() && str.top()!='(' )
            {
                res+=s[i];
                str.pop();
            }
            if(!str.empty())
            {
                str.pop();
            }
            
        }
        else
        {
            while (!str.empty() && prec(s[i])<=prec(str.top()))
            {
                res+=str.top();
                str.pop();
            }
            str.push(s[i]);
        }
    }

    while(!str.empty())
    {
        res+=str.top();
        str.pop();
    }
    return res;
}

int main ()
{
    cout<<intopre("(a-b/c)*(a/k-l")<<endl;
    return 0;
}