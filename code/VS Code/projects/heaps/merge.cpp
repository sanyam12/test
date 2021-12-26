#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k; cin>>k;
    vector<vector<int> > a(k);

    for(int i=0; i<k;i++)
    {
        int size; cin>>size;
        a[i] = vector<int>(size);
        for(int j=0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }

    vector<int> idx(k,0);
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > heap;

    for(int i=0; i<k;i++)
    {
        heap.push(make_pair(a[i][0],i));
    }

    vector<int> ans;
    while (!heap.empty())
    {
        pair<int,int> temp = heap.top();
        heap.pop();

        ans.push_back(temp.first);

        if(idx[temp.second]+1<a[temp.second].size())
        {
            heap.push( make_pair(a[temp.second][idx[temp.second]+1],temp.second));
        }
        idx[temp.second]+=1;
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}