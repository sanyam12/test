#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int, vector<pair<int,int>>> adj;
map<int, int> dist, parent;
map<int, bool> vis;
int cost = 0;

void prims(int source)
{
    for(int i=0; i<n;i++)
    {
        dist[i] = INT_MAX;
    }
    dist[source]=0;
    set<vector<int>> s;
    s.insert({0,source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = 1;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost +=w;
        for(auto i:adj[u])
        {
            if(!vis[i.first])
            {
                if(dist[i.first]>i.second)
                {
                    s.erase({dist[i.first],i.first});
                    dist[i.first] = i.second;
                    s.insert({dist[i.first], i.first});
                    parent[i.first] = u;
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