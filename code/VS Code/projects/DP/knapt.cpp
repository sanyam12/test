#include <bits/stdc++.h>
using namespace std;

bool fun(int x)
{
    cout<<x<<endl;
    return true;
}

int main()
{
    int w,n;
    cin>>w>>n;
    vector<int> wt;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        wt.push_back(x);
    }
    vector<int> profit;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        profit.push_back(x);
    }

    vector<vector<int>> dp(n+1,vector<int> (w+1,-1));
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[0].size();j++)
        {
            //cout<<i<<" "<<j<<endl;
            if(i==0||j==0)
            {
                dp[i][j] = 0;
            }else if(wt[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            } else
            {
                dp[i][j] = max(dp[i-1][j], (profit[i-1]+dp[i-1][j-wt[i-1]]));
            }
        }
    }
    
    cout<<dp[n][w]<<endl;
    return 0;
}