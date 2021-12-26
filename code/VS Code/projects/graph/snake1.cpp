#include <bits/stdc++.h>
using namespace std;

int main()
{
    int snakes, ladders;
    map<int,int> snak, lad;
    cin>>ladders;
    for(int i=0;i<ladders;i++)
    {
        int x,y; cin>>x>>y;
        lad[x] = y;
    }

    cin>>snakes;
    for(int i=0;i<snakes;i++)
    {
        int x,y;
        cin>>x>>y;
        snak[x] = y;
    }
    vector<int> vis(101,0);
    queue<int> q;
    q.push(1);
    vis[1] = true;
    bool found = false;
    int moves = 0;

    while(!q.empty() && !found)
    {
        int sz = q.size();
        while(sz--)
        {
            int t = q.front();
            q.pop();
            for(int i=1;i<=6;i++)
            {
                if(t+i==100)
                    found = true;
                if(t+i<=100 && lad[t+i] && !vis[lad[i+t]])
                {
                    vis[lad[i+t]] = true;
                    if(lad[i+t]==100)
                        found = true;
                    q.push(lad[i+t]);
                }else if(i+t<=100 && snak[i+t] && !vis[snak[i+t]])
                {
                    vis[snak[i+t]] = 1;
                    if(snak[t+i]==100)
                        found = true;
                    q.push(snak[t+i]);
                }else if(t+i<=100 && !lad[t+i] && !snak[t+i] && !vis[t+i])
                {
                    vis[t+i] = true;
                    q.push(t+i);
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