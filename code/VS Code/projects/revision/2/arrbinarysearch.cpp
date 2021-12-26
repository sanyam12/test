#include <iostream>
using namespace std;

int binseaarch (int arr[], int n, int key) 
{
    int start, end;
    start = 0;
    end = n-1;
    while (start <= end)
    {
        int mid = (start + end)/2;
        if(key>arr[mid])
        {
            start = mid+1;
        } 
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        else if (arr[mid] == key)
        {
            return mid;
        }
    }
    return -1;
}

int main () {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binseaarch(arr, n, key)<<endl;
    return 0;
}