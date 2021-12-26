#include <iostream>
using namespace std;

int rainWater(int arr[], int n)
{
    //warning: - lmax and rmax are not initialed and may cuase soem errors(not sure)
    int lmax[n];
    int rmax[n];
    
    //lmax array setup
    lmax[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }

    //rmax array setup
    rmax[n-1]=arr[n-1];
    for(int i=n-2; i>=0;i--)
    {
        rmax[i] = max(arr[i],rmax[i+1]);
    }

    int water = 0;

    for(int i=1; i<n-1;i++)
    {
        water += min(lmax[i], rmax[i]) - arr[i];
    }
    return water;
}

int main ()
{
    //int arr[] = {3,0,1,2,5};
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<rainWater(arr,n)<<endl;
    return 0;
}