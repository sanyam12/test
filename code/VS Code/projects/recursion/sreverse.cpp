#include <iostream>
#include <string>
using namespace std;

void rev (string s, int i, int n)
{
    if(i==(n))
    {
        return;
    }

    cout<<s[n-1-i];
    rev(s, (i+1), n);
    return;
}

int main ()
{
    string s = "binod";
    rev(s,0,5);
    cout<<endl;
    return 0;
}