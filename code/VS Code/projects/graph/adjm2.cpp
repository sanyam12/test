#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"\n\nadjacency list of the above graph is: -\n";
    for(int i=1;i<n+1;i++)
    {
        cout<<i <<"-> ";
        for(auto j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}