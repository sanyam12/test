#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n); int sum = 0;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
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

            }else if(a[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            }else
            {
                if(dp[i-1][j]==1 || dp[i-1][j-a[i-1]]==1)
                {
                    dp[i][j]=1;
                }
            }
        }
    }
    
    for(int i=(sum/2); i>=0; i--)
    {
        if(dp[n][i]==1)
        {
            cout<<(sum-(2*i))<<endl;
            break;
        }
    }
    return 0;
}