#include <iostream>
#include <vector>
using namespace std;

void countsort(int arr[], int n)
{
    int max = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }   //you will get max value present in the array
    
    //forming and setting all to zero value.
    int counter[max+1];
    for(int i=0; i<=max;i++)
    {
        counter[i] = 0;
    }

    //making the counter array with useful values.
    for(int i=0; i<n; i++)
    {
        counter[ (arr[i]) ]++;
    }

    //forming and setting values for position values.
    int position[max+1];
    position[0]=0;
    for(int i=1; i<=max;i++)
    {
        position[i]=position[i-1]+counter[i];
    }

    //forming the answer array with all set to zero.
    //SHOW TIME, BABY!!!
    int ans[n];

    for(int i=0; i<n;i++)
    {
        ans[i] = 0;
    }

    for(int i=(n-1); i>=0;i--)
    {
        position[ (arr[i]) ]--;
        ans[(position[ (arr[i]) ])] = arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" "; //<<i<<endl;
    }
    cout<<endl;
    return;
}

int main ()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = (sizeof(arr) / sizeof(arr[0]));
    countsort(arr, n);
    return 0;
}