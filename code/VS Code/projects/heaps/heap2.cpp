#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int *arr, int n, int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = (2*i)+2;

    if(l<n && arr[largest]<arr[l])
    {
        largest = l;
    }

    if(r<n && arr[largest]<arr[r])
    {
        largest = r;
    }

    if(largest!=1)
    {
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
    
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int arr[] = {4,10,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    heapify(arr,n,0);
    //print(arr,n);
    return 0;
}