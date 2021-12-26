#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && arr[l]>arr[largest])
    {
        largest = l;
    }

    if(r<n && arr[r]>arr[largest])
    {
        largest = r;
    }

    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
        
    }
}

void deleteHeap(int arr[], int n)
{
    arr[0] = arr[n-1];
    n--;
    heapify(arr,n,0);
}

void print(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {30,20,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    deleteHeap(arr,n);
    print(arr,n-1);
    return 0;
}