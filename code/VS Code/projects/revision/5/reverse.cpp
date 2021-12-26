#include <iostream>
using namespace std;

char reverse (string s, int n, int i)
{
    if(i==n)
    {
        return s[n];
    }
    cout<<reverse(s,n,i+1);
    return s[i];
}

int main ()
{
    string s = "binod";
    cout<<reverse(s,s.size(),0)<<endl;
    return 0;
}