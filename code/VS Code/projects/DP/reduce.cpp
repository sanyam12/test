#include <bits/stdc++.h>
using namespace std;
map<string, int> m;
int solve(vector<int> a, int x, int l, int r, int count)
{
    if(l>r||x<0)
    {
        //cout<<l<<" "<<r<<endl;
        return INT_MAX;
    }
    if(x==0)
    {
        return count;
    }
    string s = to_string(l) +","+to_string(r) +","+to_string(count);
    
    if(m[s]!=0)
    {
        return m[s];
    }

    int left = solve(a, x-a[l], l+1, r, count+1);
    int right = solve(a, x-a[r], l, r-1, count +1);
    return m[s] = min(left, right);
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<solve(a,x,0,n-1,0)<<endl;
    return 0;
}