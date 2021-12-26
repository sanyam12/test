#include <iostream>
using namespace std;

int searchfirst (int arr[] , int n , int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i] == key)
    {
        return i;
    }

    return searchfirst(arr, n, i+1 , key);
}

int searchsecond (int arr[] , int n , int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i] == key)
    {
        return i;
    }

    return searchsecond(arr, n, i+1 , key);
}

int main ()
{
    int arr[] = {4,2,1,2,5,2,7};
    int i = searchfirst(arr,7,1,2);
    cout<<i<<" "<<searchsecond(arr, 7,i+1,2);
    return 0;
}