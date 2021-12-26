#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<bool> vis[N+1];
vector<int> adj[N+1];
vector<int> indeg(N,0);
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    for(int i=0; i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }

    queue<int> q;
    for(int i=0;i<N;i++)
    {
        if(indeg[i]==0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        cout<<x<<" ";
        for(auto i : adj[x])
        {
            indeg[i]--;
            if(indeg[i]==0)
            {
                q.push(i);
            }
        }
    }
    
    return 0;
}