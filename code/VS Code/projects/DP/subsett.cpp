#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum, n;
    cin>>sum>>n;
    vector<int> items(n);
    for(int i=0;i<n;i++)
    {
        cin>>items[i];
    }

    vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[0].size(); j++)
        {
            if(j==0)
            {
                dp[i][j] = 1;
            }else if(i==0)
            {
                dp[i][j] = 0;
            }else
            {
                if(dp[i-1][j]==1 || dp[i-1][j-items[i]]==1)
                {
                    dp[i][j]=1;
                } else
                {
                    dp[i][j] = 0;
                }
            }
        }
    }

    if(dp[n][sum]==1)
    {
        cout<<"true\n";
    } else if(dp[n][sum]==0)
    {
        cout<<"false\n";
    }
    return 0;
}