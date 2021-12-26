#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    for(int i=start; i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void divBy3(int arr[], int n, int k)
{
    int start = 0, end = -1, sum = 0;
    for(int i=0; i<k; i++)
    {
        sum += arr[i];
        end = i;
    }

    if(sum%3==0)
    {
        print(arr, start, end);
        return;
    }

    for(int i=k;i<n;i++)
    {
        sum = sum + arr[i] - arr[i-k];
        start++;
        end++;
        if(sum%3==0)
        {
            print(arr, start, end);
            return;
        }
    }
}

int main ()
{
    int arr[] = {84,23,45,12,56,82};
    int n = sizeof(arr)/sizeof(arr[0]);
    divBy3(arr,n,3);
    return 0;
}