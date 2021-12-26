#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n,storage;
    cin>>n>>storage;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        int t1,t2,t3; cin>>t1>>t2;
        t3 = t1/t2;
        temp.push_back(t1);
        temp.push_back(t2);
        temp.push_back(t3);
        a[i] = temp;
    }

    sort(a.begin(), a.end(), [&](vector<int> &a, vector<int>&b)
    {
        return a[2]>b[2];
    });

    int value = 0;
    for(int i=0;i<n;i++)
    {
        if (storage>=a[i][1])
        {
            storage-=a[i][1];
            value +=a[i][0];
        }else
        {
            value += (a[i][2]*storage);
            storage =0;
        }
        
    }
    cout<<value<<endl;
    return 0;
}
