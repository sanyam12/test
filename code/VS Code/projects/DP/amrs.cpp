#include <bits/stdc++.h>
using namespace std;

int main ()
{
    for(int i=1; i<501;i++)
    {
        string s = to_string(i);
        long long int sum = 0;
        for(int j=0; j<s.length(); j++)
        {
            long long int temp = s[j]-'0';
            sum += (temp*temp*temp);
        }
        if(i==sum)
        {
            cout<<i<<" "<<sum<<" is armstrong.\n";
        }else
        {
            cout<<i<<" "<<sum<<" is not armstrong.\n";
        }
    }

    return 0;
}