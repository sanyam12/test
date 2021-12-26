#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, len;
    cin>>n>>len;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<vector<int>> dp(n+1, vector<int> (len+1, 0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=len;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j] = 0;
            }else if(i>j)
            {
                dp[i][j] = dp[i-1][j];
            }else
            {
                dp[i][j] = max( (a[i-1]+ dp[i][j-i]), dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][len]<<endl;
    return 0;
}