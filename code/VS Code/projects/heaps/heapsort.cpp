#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i +1;
    int r = 2*i +2;

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

void popHeap(int arr[], int n)
{
    arr[0] = arr[n-1];n--;
    heapify(arr,n,0);
}

void heapSort(int arr[], int n)
{
    while (n>0)
    {
        cout<<arr[0]<<" ";
        popHeap(arr,n);
        n--;
    }
    cout<<endl;
}

int main ()
{
    int arr[] = {30,18,21,15,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    return 0;
}