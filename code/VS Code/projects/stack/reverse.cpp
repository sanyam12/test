#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseString(string s)
{
    stack<string> str;

    for(int i=0; i<s.length(); i++)
    {
        string temp = "";
        while (s[i]!=' ' && i!=s.length())
        {
            temp +=s[i];
            i++;
        }
        str.push(temp);
    }
    
    while (!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }cout<<endl;
    
}

int main ()
{
    string s = "this is a string.";
    reverseString(s);
    return 0;
}