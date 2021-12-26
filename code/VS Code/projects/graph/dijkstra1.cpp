#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<int, vector<pair<int,int>>> adj;
    map<int,int> dist;
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back(make_pair(y,w));
        adj[y].push_back(make_pair(x,w));
        dist[x] = INT_MAX;  dist[y] = INT_MAX;
    }

    int source = adj.begin()->first;
    dist[source] = 0;
    set<vector<int>> s;
    s.insert({0,source});
    while(!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for(auto i:adj[x[1]])
        {
            if(dist[i.first] > dist[x[0]] + i.second)
            {
                s.erase({dist[i.first],i.first});
                dist[i.first] = dist[x[0]] + i.second;
                s.insert({dist[i.first], i.second});
            }
        }
    }
    
    for(auto i:dist)
    {
        if(i.second != INT_MAX)
        {
            cout<<i.second<<" ";
        }
    }
    cout<<endl;
    return 0;
}