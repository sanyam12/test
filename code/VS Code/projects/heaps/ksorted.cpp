#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main ()
{
    int k; cin>>k;
    vector<vector<int> > arr(k);
    for(int i=0; i<k;i++)
    {
        int size;
        cin>>size;
        arr[i] = vector<int> (size);
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }


    vector<int> idx(k,0);
    priority_queue<pair<int,int>, vector<pair<int,int> > ,greater<pair<int,int> > > minimum;
    for(int i=0;i<k;i++)
    {
        minimum.push(make_pair(arr[i][0],i));
    }

    while(!minimum.empty())
    {
        cout<<minimum.top().first<<" ";
        int num = minimum.top().second;
        minimum.pop();
        if((idx[num]+1)<arr[num].size())
        {
            minimum.push(make_pair(arr[num][idx[num]+1],num));
        }
        
        idx[num]++;
    }
    cout<<endl;
    return 0;
}