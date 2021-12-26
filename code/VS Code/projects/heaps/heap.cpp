#include <bits/stdc++.h>
using namespace std;

void heapify(int *arr, int n, int i)
{
    int largest = i;
    int l= 2*(i) , r= (2*i)+1;;
    
    cout<<l<<" "<<r<<endl;
    if(l<n && arr[l-1]>arr[largest-1])
    {
        largest = l;
    }
    if(r<n && arr[r-1]>arr[largest-1])
    {
        largest = r;
    }

    if(largest!=i)
    {
        swap(arr[i-1], arr[largest-1]);
        heapify(arr,n,l);
        heapify(arr,n,r);
    }
    
}

void printarr(int arr[], int n)

{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int arr[] = {10,15,21,30,18,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<is_heap(arr, arr+n)<<endl;
    heapify(arr,n,1);
    printarr(arr,n);
    cout<<is_heap(arr, arr+n)<<endl;
    return 0;
}