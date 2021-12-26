#include <bits/stdc++.h>
using namespace std;
int w,n;
vector<vector<int>> m(n,vector<int>(w,-1));

int fun(vector<vector<int>> items, int i, int wi)
{
    if(i>=items.size())
    {
        return 0;
    }

    if(m[n][wi]!=-1)
    {
        return m[n][wi];
    }

    int a = 0, b =0;
    if(items[i][0]<=wi)
    {   
        a +=items[i][1];
        a += fun(items,i+1,(wi-items[i][0]));
    }
    b+=fun(items,i+1,wi);

    return m[i][wi] = max(a,b);
}

int main()
{    
    cin>> w >>n;

    vector<vector<int>> items;
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        items.push_back({x,y});
    }

    cout<<fun(items,0,w)<<endl;
    return 0;
}