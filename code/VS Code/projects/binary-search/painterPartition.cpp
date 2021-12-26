#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int students = 0, sum =0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        } else
        {
            if(arr[i]+sum>mid)
            {
                students++;
                sum=arr[i];
            } else
            {
                sum+=arr[i];
            }
        }
    }
    
    if(students>m)
    {
        return false;
    } else
    {
        return true;
    }
}

int paintPartition(int arr[], int n, int m)
{
    int total = 0, k=0;
    for(int i=0; i<n;i++)
    {
        k = min(k,arr[i]);
        total+=arr[i];
    }

    int left =0, right = total, ans = INT_MAX;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans = min(ans, mid);
            right = mid-1;
        } else
        {
            left = mid+1;
        }
    }

    return ans;
}

int main ()
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<paintPartition(arr,n,2)<<endl;
    return 0;
}