#include <iostream>
#include <limits>
using namespace std;

int main () {
    int n;
    cin>>n;

    //input
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //min value
    int min = INT_MAX;
    for (int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    while (arr[0] != min)
    {
        for(int i=0; i<(n-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                // cout<<i<<" ";
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    //output
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}