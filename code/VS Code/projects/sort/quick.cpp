#include <iostream>
using namespace std;

void swap (int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition (int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s-1;

    for(int j=s; j<e; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            //swap i and j elements
            swap(arr, i,j);
        }
    }
    
    //sway (i+1)th element with r'th element
    swap(arr,i+1,e);
    return i+1;
}

void quick(int arr[], int s, int e)
{
    if(s<e)
    {
        int pi = partition(arr,s,e);

        quick(arr,s,pi-1);
        quick(arr,pi+1,e);
    }
    
}

int main ()
{
    int arr[] = {5,4,3,2,1};
    quick(arr,0,4);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}