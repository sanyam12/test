#include <bits/stdc++.h>
using namespace std;

int perfect(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                sum += j;
            }
        }
        if(sum==arr[i])
        {
            arr[i]=1;
        } else
        {
            arr[i]=0;
        }
    }

    int start =0, end = k, ans = -1, sum = 0;

    for(int i=0; i<k;i++)
    {
        sum+=arr[i];
    }
    ans = max(sum, ans);
    for(int i=k; i<n;i++)
    {
        sum = sum + arr[i] - arr[start];
        start++;
        ans = max(ans,sum);
    }

    return ans;
}

int main ()
{
    int arr[] = {28, 2,3,6,496,99, 8128,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<perfect(arr,n,4)<<endl;
    return 0;
}