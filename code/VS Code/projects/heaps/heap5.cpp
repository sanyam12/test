#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

void heapify(int arr[], int n, int i)
{
    int parent = (i-1)/2;
    if(arr[parent] >0)
    {
        if(arr[i]>arr[parent])
        {
            swap(arr[i], arr[parent]);
            heapify(arr,n,parent);
        }
    }
}

void insert(int arr[], int n, int val)
{
    n++;
    arr[n-1] = val;
    heapify(arr,n,n-1);
}

void print(int arr[],int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int arr[MAX] = {30,18,21,15,10,19};
    int n = 6;

    insert(arr,n,12);
    print(arr,n+1);
    cout<<is_heap(arr,arr+n)<<endl;
    return 0;
}