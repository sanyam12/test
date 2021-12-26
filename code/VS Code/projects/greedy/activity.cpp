#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a;

    for(int i=0; i<n;i++)
    {
        int one, two;
        cin>>one>>two;
        a.push_back({one,two});
    }
    
    sort(a.begin(), a.end(), [&](pair<int,int> &a, pair<int,int> &b)
    {
        return a.second<b.second;
    });
    
    int take = 1;
    int end = a[0].second;
    
    for(int i=1;i<a.size();i++)
    {
        if(a[i].first>=end)
        {
            take++;
            end = a[i].second;
        }
    }
    cout<<take<<endl;
    return 0;
}