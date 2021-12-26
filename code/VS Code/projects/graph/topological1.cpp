#include <bits/stdc++.h>
using namespace std;

//const int N = 1e5+2;

int main()
{
    int n,m;
    cin>>n>>m;
    //int cnt = 0;
    vector<vector<int>> adj(n);
    map<int, int> indeg;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
        indeg[x]=indeg[x];
    }

    queue<int> ans;
    cout<<endl;cout<<endl;

    for(auto i = indeg.begin(); i!=indeg.end();i++)
    {
        if(i->second==0)
        {
            ans.push(i->first);
        }
    }
    while (!ans.empty())
    {
        //cnt++;
        int x = ans.front();
        ans.pop();

        cout<<x<<" ";
        for(auto i:adj[x])
        {
            indeg[i]--;
            if(indeg[i]==0)
            {
                ans.push(i);
            }
        }
    }
    cout<<endl;
    return 0;
}