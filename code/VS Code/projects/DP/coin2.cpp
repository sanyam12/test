#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin>>n>>sum;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j==0)
            {
                dp[i][j]=1;
            }else if(i==0)
            {

            } else if(a[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            } else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-a[i-1]];
            }

        }
    }
    
    cout<<dp[n][sum]<<endl;
    return 0;
}