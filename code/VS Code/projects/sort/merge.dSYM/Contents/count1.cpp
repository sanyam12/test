#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = ( sizeof(arr) / sizeof(arr[0]) );
    
    int max = -1;
    for(int i=0; i<n;i++)   
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    //initialising counter and position arrays
    int counter[max+1], position[max+1];
    int ans[n];
    for(int i=0; i<=max; i++)
    {
        counter[i]=0;
        position[i]=0;
    }

    //initialising ans
    for(int i=0; i<n; i++)
    {
        ans[i]=0;
    }

    //setting up counter
    for(int i=0; i<n;i++)
    {
        counter[arr[i]]++;
    }

    //setting up position
    position[0]=0;
    for(int i=1; i<=max; i++)
    {
        position[i]=counter[i]+position[i-1];
    }

    //setting up ans
    for(int i=0; i<n; i++)
    {
        position[arr[i]]--;
        ans[ (position[arr[i]]) ]= arr[i];
    }

    //printing the ans array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}