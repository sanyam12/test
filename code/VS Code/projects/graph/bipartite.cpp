#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> adj;
map<int, bool> vis;
map<int, int> color;
bool bipartit = true;

void col(int node, int curr)
{
    if(color[node]!=-1 && curr!=color[node])
    {
        bipartit = false;
        return;
    }

    color[node] = curr;
    
    if(vis[node])
    {
        return;
    }
    
    vis[node]=1;
    for(auto i : adj[node])
    {
        if(curr ==1)
        {
            col(i,0);
        } else if(curr ==0)
        {
            col(i,1);
        }
    }
}

int main ()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
        vis[x] = 0;
        vis[y] = 0;
        color[x] = -1;
        color[y] = -1;
    }

    for(auto i:adj)
    {
        if(vis[i.first]==0)
        {
            col(i.first,0);
        }
    }

    if(bipartit)
        cout<<"graph is bipartite.\n";
    else
        cout<<"graph is not bipartite.\n";
    return 0;
}