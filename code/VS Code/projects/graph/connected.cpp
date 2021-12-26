#include <iostream>
#include <map>
#include <vector>
using namespace std;

void dfs(map<int,vector<int>> &adj, map<int,bool> &vis, int i)
{
    if(vis[i])
    {
        return;
    }
    vis[i]=true;
    for(auto j:adj[i])
    {
        dfs(adj,vis,j);
    }
}

int main()
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
        adj[y].push_back(x);
        vis[x] = false;
        vis[y] = false;
    }

    int ans = 0;

    for(auto i:vis)
    {
        if(i.second==false)
        {
            ans++;
            dfs(adj,vis,i.first);
        }
    }
    
    cout<<ans<<endl;
    return 0;
}