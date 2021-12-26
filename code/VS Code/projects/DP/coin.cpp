#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int> list, int t, int n, int &ans)
{


    //this is temporary...
    return true;
}

int main()
{
    int t,n;
    cin>>t>>n;
    vector<int> list;
    for(int i=0; i<n;i++)
    {
        int x;cin>>x;
        list.push_back(x);
    }

    int ans = 0;
    if(fun(list, t,n, ans))
    {
        cout<<ans<<endl;
    } else
    {
        cout<<-1<<endl;
    }
    return 0;
}