#include <iostream>
using namespace std;

void traverse(string s, int n, int i, int x)
{
    if(i==n)
    {
        string xprint (x, 'x');
        cout<<xprint<<endl;
        return;
    }

    if(s[i]=='x')
    {
        x++;
        traverse(s,n,i+1,x);
    } else
    {
        cout<<s[i];
        traverse(s,n,i+1, x);
    }
}

int main () 
{
    string s = "axxbdxcefxhix";
    traverse(s,s.size(),0,0);
    return 0;
}