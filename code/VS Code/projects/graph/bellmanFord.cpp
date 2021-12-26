#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edges;
    vector<int> dist(n,1e9);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    
    int source; cin>>source;
    dist[source] = 0;
    for (int i=0;i<n-1;i++)
    {
        for(auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            dist[v] = min(dist[v], dist[u]+w);
        }
    }
    for(auto i:dist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}