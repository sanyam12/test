#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool comp(vector<int> &a, vector<int> &b)
{
    return a[2]<b[2];
}

int main ()
{
    int n,total, fuel;
    cin>>n>>total>>fuel;
    vector<vector<int>> station(n);
    for (int i = 0; i < n; i++)
    {
        int dist, fuel;  cin>>dist>>fuel;
        station[i] = vector<int> {dist,fuel};
        station[i].push_back((total-station[i][0]));
    }
    
    sort(station.begin(), station.end(), comp);
    priority_queue<int, vector<int>> maxfuel;
    
    int dist = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        fuel -= (station[i][2]-dist);
        dist = station[i][2];
        maxfuel.push(station[i][1]);
        
        if(fuel==0)
        {
            fuel+=maxfuel.top();
            maxfuel.pop();
            ans ++;
        }
    }
    cout<<ans<<endl;
    return 0;
}