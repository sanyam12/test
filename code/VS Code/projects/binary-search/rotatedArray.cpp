#include <iostream>
using namespace std;

int bitsearch(int arr[], int key, int left, int right)
{
    while(left<right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==key)
        {
            return mid;
        } else if(arr[mid]>key)
        {
            right = mid-1;
        } else
        {
            left = mid+1;
        }
    }
    return -1;
}

int sorted(int arr[], int n, int key, int s, int e)
{
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        } else if(arr[mid]>key)
        {
            e = mid-1;
        } else
        {
            s = mid+1;
        }
    }

    return -1;
}

int finder(int arr[],int n, int key)
{
    int pivot =-1;
    for(int i=0; i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            pivot = i;
            break;
        }
    }
    int right = sorted(arr,n,key,pivot+1,n);
    if(right!=-1)
    {
        return right;
    }

    int left = sorted(arr,n,key,0,pivot);
    return left;
}

int main ()
{
    int arr[] = {30,40,50,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<finder(arr,5,20)<<endl;
    return 0;
}