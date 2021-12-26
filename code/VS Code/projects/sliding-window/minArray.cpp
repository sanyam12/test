#include <iostream>
#include <climits>
using namespace std;

void min(int arr[], int n, int x)
{
    int ans = INT_MAX, start = 0, sum = 0;

    for(int i=0; i<n;i++)
    {
        if(sum<x)
        {
            sum+=arr[i];
            if(sum>x)
            {
                ans = min(ans, (i-start+1));
                cout<<i<<" "<<start<<endl;
            }
        } else
        {
            sum -= arr[start];
            
            start++;
            i--;
            if(sum>x)
            {
                ans = min(ans, (i-start+1));
                cout<<i<<" "<<start<<endl;
            }
        }
    }
    cout<<ans<<endl;
}

int main ()
{
    int arr[] = {1,4,45,6,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    min(arr,n,51);
    return 0;
}