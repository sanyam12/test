#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<bool> vis(N+1,0);
vector<vector<int>> adj(N+1);

void dfs(int node)
{
    //preorder
    vis[node] = 1;

    //inorder
    for(auto i = adj[node].begin(); i!=adj[node].end(); i++)
    {
        if(vis[*i]==0)
        {
            dfs(*i);
        }
    }

    cout<<node<<" ";
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
    }

    dfs(1);
    cout<<endl; 
    return 0;
}