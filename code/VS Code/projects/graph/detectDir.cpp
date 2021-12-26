#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;
    map<int, vector<int>> adj;
    map<int, bool> vis;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    bool cycle = false;
    for(auto i:adj)
    {
        vis[i.first] = true;
        for(auto j:i.second)
        {
            if(vis[j]==1)
            {
                cout<<"cycle found\n";
                cycle = true;
                break;
            }
        }
    }
    
    if(!cycle)
    {
        cout<<"cycle not found.\n";
    }
    return 0;
}