#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int> &list, int sum, int i)
{
    if(sum<0||i<0)
    {
        return false;
    }
    if(sum==0)
    {
        return true;
    }

    return (fun(list,sum-list[i],i-1)||fun(list,sum,i-1));
}

int main()
{
    int sum, n;
    cin>>sum>>n;
    vector<int> list(n);
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }

    if(fun(list,sum,n-1))
    {
        cout<<"true\n";
    }else
    {
        cout<<"false\n";
    }

    return 0;
}