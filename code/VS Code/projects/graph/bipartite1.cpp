#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> adj;
map<int, bool> vis;
map<int, int> col;
bool bipartite = true;

void color(int n, int curr)
{
    if(col[n]!=-1 && col[n]!=curr)
    {
        bipartite = false;
        return;
    }

    col[n] = curr;

    if(vis[n])
    {
        return;
    }else
    {
        vis[n] = 1;
    }

    for(auto i:adj[n])
    {
        if(curr == 1)
        {
            color(i,0);
        } else if(curr==0)
        {
            color(i,1);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
        vis[x] = 0; vis[y] = 0;
        col[x] = -1; col[y] = -1;
    }

    for(auto i:adj)
    {
        if(vis[i.first]==0)
        {
            color(i.first, 0);
        }
    }
    return 0;
}