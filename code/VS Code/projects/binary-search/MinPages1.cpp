#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int min, int sum)
{
    int temp =0, i=0;
    while(m>0 && temp<sum)
    {
        
    }

    return true;
}

int MinPages(int arr[], int n, int m)
{
    int sum =0;
    if(n<m)
    {
        return -1;
    }

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    int left = 0, right = sum, ans = INT_MAX;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(isPossible(arr,n,m,mid,sum))
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
    return 0;
}