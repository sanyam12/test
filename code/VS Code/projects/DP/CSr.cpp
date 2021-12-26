#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &set, int n, int w)
{
    if(n<0||w<0)
    {
        return -1;
    }

    if(w==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    if(set[n-1]>w)
    {
        return fun(set,n-1,w);
    }else
    {
        return (fun(set,n-1,w) + fun(set,n-1,w-set[n-1]));
    }
}

int main()
{
    int n,w;
    cin>>n>>w;
    vector<int> set(n);
    for(int i=0;i<n;i++)
    {
        cin>>set[i];
    }

    cout<<fun(set, n, w)<<endl;
    return 0;
}