#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin>>n>>w;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (w+1, 0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(j==0)
            {
                dp[i][j]++;
            }else if(i==0)
            {
                dp[i][j] = 0;
            }else if(a[i-1]>w)
            {
                dp[i][j] = dp[i-1][j];
            }else
            {
                dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
            }
        }
    }
    
    cout<<dp[n][w]<<endl;
    return 0;
}