#include <bits/stdc++.h>
using namespace std;

map<int,int> parent;
map<int, int> size;

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if(parent[v]==v)
    {
        return v;
    }
    return parent[v] = find(parent[v]);
}

void union_sets(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a!=b)
    {
        if(size[a]<size[b])
            swap(a,b);
        parent[b] = a;
        size[a] +=size[b];
    }
}

int main ()
{
    map<int, vector<int>> edges;
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        edges[i].push_back(x);
        edges[i].push_back(y);
        make(x);
        make(y);
    }

    int cycle = false;

    for(auto i:edges)
    {
        int a = i.second[0];
        int b = i.second[1];
        int x = find(a);
        int y = find(b);
        if(x==y)
        {
            cycle = true;
            
        } else
        {
            union_sets(a,b);
        }
    }


    if(cycle)
        cout<<"cycle found.\n";
    else
        cout<<"cycle not found.\n";
    return 0;
}