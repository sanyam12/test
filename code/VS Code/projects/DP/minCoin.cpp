#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, amt;
    cin>>n>>amt;
    vector<int> coin(n);
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (amt+1, 0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0; j<=amt;j++)
        {
            if(i==0)
                dp[i][j] = INT_MAX;
            else if(j==0)
            {
                
            }else if(coin[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            }else
            {
                dp[i][j] = min(dp[i-1][j], 1+dp[i][j-coin[i-1]]);
            }
        }
    }
    
    cout<<dp[n][amt]<<endl;
    return 0;
}