#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool palindrom(int arr[], int start, int end)
{
    for(int i = start;i<=end;i++)
    {
        if(arr[i]!=arr[end])
        {
            return false;
        }
        end--;
    }
    return true;
}

void subArray(int arr[], int n, int k)
{
    int start = 0, end = k-1;
    if(palindrom(arr,start,end))
    {
        print(arr,start,end);
        return;
    }
    for(int i=k; i<n;i++)
    {
        start++;
        if(palindrom(arr,start,i))
        {
            print(arr,start,i);
            return;
        }
    }
}

int main ()
{
    int arr[] = {2,3,5,1,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArray(arr,n,4);
    return 0;
}