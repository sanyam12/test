#include <bits/stdc++.h>
using namespace std;
map<int, vector<pair<int,int>>> adj;
map<int, bool> vis;
map<int, int> dist;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back(make_pair(w,y));
        adj[y].push_back(make_pair(w,x));
        vis[x]=false;   vis[y] = false;
        dist[x]=INT_MAX;    dist[y] = INT_MAX;
    }

    int source = adj.begin()->first;
    dist[source] = 0;
    set<vector<int>> s;
    s.insert({0,source});
    while(!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        int u = x[1];

        for(auto i : adj[u])
        {
            if(dist[i.second]> dist[u] + i.first)
            {
                s.erase({dist[i.second],i.first});
                dist[i.second] = dist[u] + i.first;
                s.insert({dist[i.second], i.first});
            }
        }

    }

    for(auto i:dist)
    {
        if(i.second<INT_MAX)
        {
            cout<<i.second<<" ";
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    cout<<endl;
    return 0;
}