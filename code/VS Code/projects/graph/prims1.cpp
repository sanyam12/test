#include <bits/stdc++.h>
using namespace std;

map<int, vector<pair<int,int>>> adj;
map<int, int> parent, vis, dist;
int n,m;
int cost = 0;

void prims(int source)
{
    for(int i=0 ;i<n;i++)
    {
        dist[i] = INT_MAX;
    }

    dist[source] = 0;
    set<vector<int>> s;
    s.insert({0,source});
    //format-> {wt,vertex}
    while(!s.empty())
    {
        auto x = *(s.begin());
        vis[x[1]] = true;
        s.erase(x);
        int u = x[1];
        int v = parent[u];
        int w = x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost+=w;
        
        for(auto i:adj[u])
        {
            if(!vis[i.first])
            {
                if(dist[i.first]> i.second)
                {
                    s.erase({dist[i.first], i.first});
                    dist[i.first] = i.second;
                    s.insert({dist[i.first],i.first});
                    parent[i.first] = x[1];
                }
            }
        }

    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    prims(adj.begin()->first);
    cout<<cost<<endl;
    return 0;
}