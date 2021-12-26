#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    map<int,int> :: iterator itr;
    for(itr = m.begin(); itr!= m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}