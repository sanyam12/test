#include <iostream>
using namespace std;

int maxArray(int arr[], int n, int k, int x)
{
    int sum =0, ans = -1;

    for(int i=0; i<k;i++)
    {
        sum+=arr[i];
    }

    if(sum<x)
    {
        ans = sum;
    }

    for(int i=k; i<n;i++)
    {
        sum = sum - arr[i-k] + arr[i];

        if(sum<x)
        {
            ans = max(ans, sum);
        }
    }

    return ans;
}

int main ()
{
    int arr[] = {7,5,6,4,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxArray(arr,n,3,20)<<endl;
    return 0;
}
