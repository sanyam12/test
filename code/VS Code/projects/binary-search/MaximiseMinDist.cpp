#include <iostream>
#include <algorithm>
using namespace std;

bool isFeasible(int mid, int arr[], int k, int n)
{
    int temp = arr[0], element = 1, i=1;
    for(int i=0; i<n;i++)
    {
        if(arr[i]-temp>=mid)
        {
            temp = arr[i];
            element++;
            if(element==k)
            {
                return true;
            }
            //cout<<element<<endl;
        }
    }

        return false;
}

int largestMinDist(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int result = -1;
    int left = 1, right = arr[n-1];
    while(left<right)
    {
        int mid = (left + right)/2;
        if(isFeasible(mid, arr,k,n))
        {
            result = max(result, mid);
            left = mid+1;
        } else
        {
            right = mid-1;
        }
    }
    return result;
}

int main ()
{
    int arr[] = {1,2,8,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<largestMinDist(arr,n,3)<<endl;
    return 0;
}