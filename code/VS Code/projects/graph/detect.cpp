#include <bits/stdc++.h>
using namespace std;

bool iscycle(map<int,vector<int>> &adj, map<int,bool> &vis, int it, int parent)
{
    vis[it] = true;
    for(auto i : adj[it])
    {
        if(vis[i] && i!=parent)
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    int m;cin>>m;

    map<int, vector<int>> adj;
    map<int,bool> vis;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int prev; bool cycle = false;
    for(auto it:adj)
    {
        if(iscycle(adj,vis,it.first, prev))
        {
            cycle = true;
            cout<<"cycle found\n";
            break;
        }
        prev = it.first;
    }

    if(!cycle)
    {
        cout<<"cycle not found\n";
    }

    return 0;
}