#include <bits/stdc++.h>
using namespace std;

map<int, int> parent;
map<int, int> size;

void make(int v)
{
    if(!parent[v])
    {
        parent[v] = v;
        size[v] = 1;
    }
}

int findSet(int a)
{
    if(parent[a]==a)
        return a;
    return parent[a] = findSet(parent[a]);
}

void unionSet(int a, int b)
{
    a = findSet(a);
    b = findSet(b);
    if(a!=b)
    {
        if(size[a]<size[b])
            swap(a,b);
        parent[b] = a;
        size[a]+=size[b];
    }
}

bool cus(pair<int, vector<int>>* &a,pair<int, vector<int>>* &b)
{
    return (a->second[0]<b->second[0]);
}

int main()
{
    map<int, vector<int>> edges;
    //map<int, int> vis;
    vector<map<int, vector<int>>*> naksha;
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        vector<int> v = {w,x,y};
        edges[i] = v;
        make(x); make(y);
        //naksha.push_back(edges[i]);
    }
    


    for(auto i : edges)
    {
        cout<<i.second[0]<<endl;
    }
    
    return 0;
}