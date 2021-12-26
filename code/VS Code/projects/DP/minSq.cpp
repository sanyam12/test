#include <bits/stdc++.h>
using namespace std;

map<int,int> a;

int minSq(int n)
{
    if(n==1 || n==2||n==3|| n==0)
    {
        return n;
    }

    if(a[n]!=0)
    {
        return a[n];
    }

    int ans = 1e9+7;

    for(int i=1;i<=sqrt(n);i++)
    {
        ans = min(ans, 1+minSq(n-i*i));
    }

    a[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    //cout<<minSq(n)<<endl;
    
    for(int i=0;i<4;i++)
    {
        a[n] = n;
    }

    for(int i=1;i*i<=n;i++)
    {
        for(int j=0;i*i+j<=n;j++)
        {
            a[i*i + j] = min(a[i*i+j], 1+a[j]);
        }
    }

    cout<<a[n]<<endl;
    return 0;
}