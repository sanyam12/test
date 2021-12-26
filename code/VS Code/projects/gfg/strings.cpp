#include <iostream>
using namespace std;

string fun(string S1, string S2)
{
    string ans;
    for(int i=S2.length();i>=0;i--)
    {
        ans+=S2[i];
    }

    for(int i=S1.length();i>=0;i--)
    {
        ans+=S1[i];
    }
    cout<<ans;
    return ans;
}

int main ()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    fun(s1,s2);
    return 0;
}