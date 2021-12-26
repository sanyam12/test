#include <bits/stdc++.h>
using namespace std;

bool isPart(vector<int> &nums)
{
    int sum = 0; int n = nums.size();
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
    }

    if(sum%2!=0)
    {
        return false;
    }
    
    int w = sum/2;
    vector<vector<int>> dp(n+1, vector<int> (w+1,-1));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(j==0)
            {
                dp[i][j] = 1;
            }else if(i==0)
            {
                dp[i][j] = 0;
            }else
            {
                if(dp[i-1][j]==1 || dp[i-1][j-nums[i]]==1)
                {

                    dp[i][j] = 1;
                }else
                {
                    dp[i][j] = 0;
                }
            }
        }
    }
    
    if(dp[n][w]==1)
    {
        return true;
    } else
    {
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> set(n);
    for(int i=0;i<n;i++)
    {
        cin>>set[i];
    }

    if(isPart(set))
    {
        cout<<"true\n";
    }
    return 0;
}