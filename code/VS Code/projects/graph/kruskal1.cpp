#include <bits/stdc++.h>
using namespace std;

map<int, int> parent;
map<int,int> sz;

void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int findSet(int v)
{
    if(parent[v]==v)
        return v;
    return parent[v] = findSet(parent[v]);
}

void unionSet(int a, int b)
{
    a = findSet(a);
    b = findSet(b);
    if(a!=b)
    {
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    vector<vector<int>> edges;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        vector<int> v = {w,x,y};
        edges.push_back(v);
        make(x);
        make(y);
    }

    sort(edges.begin(), edges.end());

    int cost = 0;

    for(auto i:edges)
    {
        int w = i[0], u = i[1], v=i[2];
        int x = findSet(u);
        int y = findSet(v);

        if(x==y)
        {
            continue;
        }else
        {
            cout<<u<<" "<<v<<endl;
            cost+=w;
            unionSet(u,v);
        }
    }
    cout<<cost<<endl;
    return 0;
}