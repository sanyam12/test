#include <bits/stdc++.h>
using namespace std;

void inner (vector<int> arr, map<int,vector<int> > &m, int i, int h)
{
    if(i>(arr.size()-1))
    {
        return;
    }

    m[h].push_back(arr[i]);
    inner(arr,m,(2*i+1),h-1);
    inner(arr,m,(2*i+2),h+1);
}

void vertical(vector<int> arr)
{
    map<int, vector<int> > m;
    inner(arr,m,0,0);
    
    for(auto i = m.begin(); i!= m.end(); i++)
    {
        for(int j= 0; j<i->second.size(); j++)
        {
            cout<<(i->second)[j]<<" ";
        }
    }
    cout<<endl;
}

int main ()
{
    vector<int> arr {10,7,4,3,11,14,6};
    
    //cout<<arr.size()<<endl;
    vertical(arr);
    return 0;
}