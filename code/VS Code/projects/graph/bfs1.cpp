#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<bool> vis(N+1, 0);
vector<int> adj[N];

int main ()
{
    int n,m;
    cin>>n>>m;
    int essential = -1;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(i==1)
        {
            essential = x;
        }

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(essential);
    vis[essential]=true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<endl;

        vector<int> :: iterator it;
        for(it = adj[node].begin(); it!=adj[node].end();it++)
        {
            if(vis[*it]==0)
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}