#include <bits/stdc++.h>
using namespace std;

int main()
{
    int snakes, ladders;
    cin>>ladders;
    map<int,int> smap, lmap;
    vector<int> vis(101,false);

    for(auto i=0;i<ladders;i++)
    {
        int x,y;
        cin>>x>>y;
        lmap[x] = y;
    }
    cin>>snakes;
    for(int i=0;i<snakes;i++)
    {
        int x,y;
        cin>>x>>y;
        smap[x] = y;
    }
    
    int moves = 0;
    queue<int> q;
    q.push(1);
    bool found = false;
    vis[1] = true;
    while(!found and !q.empty())
    {
        int sz = q.size();
        while(sz--)
        {
            int t = q.front();
            q.pop();
            for(int die = 1; die<=6;die++)
            {
                if(t+die==100)
                    found = true;
                if(t+die<=100 && !vis[lmap[t+die]] && lmap[t+die])
                {
                    vis[lmap[t+die]] = true;
                    if(lmap[t+die]==100)
                    {
                        found = true;
                    }
                    q.push(t+die);
                }
                else if(t+die<=100 && !vis[smap[t+die]] && smap[t+die])
                {
                    vis[smap[t+die]] = true;
                    if(smap[t+die]==100)
                    {
                        found = true;
                    }
                    q.push(smap[t+die]);
                }
                else if(t+die<=100 && !vis[t+die] && !smap[t+die] && !lmap[t+die])
                {
                    vis[t+die] = true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    
    if(found)
    {
        cout<<moves<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}