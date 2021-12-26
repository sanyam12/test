#include <iostream>
using namespace std;

void pi (string s, int i, int n)
{
    if(i>(n-1))
    {
        return;
    }

    if(s[i]=='p')
    {
        if(s[i+1]=='i')
        {
            cout<<"3.14";
            pi(s, (i+2) , n);
        } 
        
        if (s[i+1]=='p') {
            cout<<s[i];
            pi(s,(i+1),n);
        }

        if( (s[i+1]!='p') && (s[i+1]!='i'))
        {
            cout<<s[i]<<s[i+1];
            pi(s,(i+2),n);
        }

    } else {
        cout<<s[i];
        pi(s,(i+1),n);
    }
    return;
}

int main () 
{
    string s="pippxxppiixipi";
    pi(s,0,14);
    return 0;
}