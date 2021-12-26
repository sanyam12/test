#include <iostream>
#include <climits>
using namespace std;

bool isFeasible(int arr[], int min, int n, int m)
{
    int sum =0, student =1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>min)
        {
            cout<<min<<" not possible.\n";
            return false;
        }else
        {
            if((sum+arr[i])<=min)
            {
                sum+=arr[i];
            } else
            {
                if(student>m)
                {
                    cout<<min<<" not possible.\n";
                    return false;
                }
                sum =arr[i];
                student++;
            }
        }
    }
    
    if(student==m&&sum<=min)
    {
        cout<<min<<" possible.\n";
        return true;
    } else
    {
        cout<<min<<" not possible.\n";
        return false;
    }
}

int minPages(int arr[], int n,int m)
{
    int sum = 0, k=INT_MAX;
    if(n<m)
    {
        return -1;
    }

    for(int i=0; i<n;i++)
    {
        k = min(k,arr[i]);
        sum += arr[i];
    }

    int left = k, right = sum, ans = INT_MAX;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(isFeasible(arr,mid,n,m))
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
    int arr[] = {12,34,67,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minPages(arr,n,2)<<endl;
    return 0;
}