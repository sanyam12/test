#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int count = 0;
    map<int,int> m;
    for(int i=0; i<n;i++)
    {
        if(m[arr[i]]==0)
            count++;
        if(count>k)
        {
            break;
        }
        m[arr[i]]++;
    }

    map<int,int> :: iterator itr;
    vector<pair<int,int> > ans;
    for(itr = m.begin(); itr!=m.end(); itr++)
    {
        if(itr->second!=0)
        {
            ans.push_back(make_pair(itr->first,itr->second));
        }
    }
    sort(ans.begin(),ans.end(), greater<pair<int,int> >());
    cout<<endl;

    for(auto i = ans.begin(); i!=ans.end(); i++)
    {
        cout<<i->first<<":- "<<i->second<<endl;
    }
    return 0;
}