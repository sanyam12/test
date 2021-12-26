#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int rainWater(int arr[], int n)
{
    //int n = sizeof(arr)/sizeof(arr[0]);
    int water =0;
    for(int i=1; i<n-1;i++)
    {
        int lmax = arr[i];
        for (int j=0; j<i;j++)
        {
            lmax = max(arr[j],lmax);
        }

        int rmax = arr[i];
        for (int j=i+1; j<n;j++)
        {
            rmax = max(arr[j],rmax);
        }

        water += (min(lmax, rmax) - arr[i]);
    }
    return water;
}

int main ()
{
    //int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int arr[] = {3,0,1,2,5};
    cout<<rainWater(arr,5)<<endl;
    return 0;
}