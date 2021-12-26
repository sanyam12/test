#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        m[sum]++;
    }

    int ans =0;
    for(auto i = m.begin(); i!=m.end();i++)
    {
        if(i->first==0)
        {
            ans += i->second;
        }

        int g = i->second;
        ans += (g*(g-1))/2;
    }
    cout<<ans<<endl;
    return 0;
}