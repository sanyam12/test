#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    if(arr[0]>arr[1])
    {
        return 0;
    }
    if(arr[n-1]>arr[n-2])
    {
        return (n-1);
    }

    int start =0, end = n-1;
    while (start<end)
    {
        int mid = (start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            //cout<<mid<<endl;
            return mid;
        } else if(arr[mid-1]>arr[mid])
        {
            end = mid-1;
        } else if(arr[mid+1]>arr[mid])
        {
            start = mid+1;
        }
    }
    
    return -1;
}

int main()
{
    int arr[] = {10,20,15,2,23,90,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<peak(arr,6)<<endl;
    return 0;
}
