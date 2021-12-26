#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[6] = "12345";
    int ans = 0;
    string uuii;
    cin>>uuii;
    for(int i=0;i<5;i++)
    {
        ans += (str[i] - '0');
    }

    cout<<ans<<endl;
    cout<<uuii<<endl;
    return 0;
}