#include <iostream>
using namespace std;

void pi (string s, int n, int i)
{
    if(i>=n)
    {
        return;
    }

    if(s[i]=='p')
    {
        if(s[i+1]=='i')
        {
            cout<<"3.14";
            pi(s,n,i+2);
            return;
        } else
        {
            cout<<s[i];
            pi(s,n,i+1);
            return;
        }
    } else
    {
        cout<<s[i];
        pi(s,n,i+1);
        return;
    }
}

int main ()
{
    string s = "pippxxppiixipi";
    pi(s,s.size(),0);
    cout<<endl;
    return 0;
}