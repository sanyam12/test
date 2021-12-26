#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int k; cin>>k;
    vector<vector<int> > arr(k);
    for(int i=0; i<k;i++)
    {
        int size; cin>>size;
        arr[i] = vector<int> (size);
        for(int j=0; j<size;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int> idx (k,0);
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >heap;
    for(int i=0; i<k;i++)
    {
        heap.push(make_pair(arr[i][0],i));
    }

    while(!heap.empty())
    {
        cout<<heap.top().first<<" ";
        int num = heap.top().second;
        heap.pop();
        if((idx[num]+1)<arr[num].size())
        {
            heap.push(make_pair(arr[num][idx[num]+1],num));
        }
        
        idx[num]++;
    }
    return 0;
}