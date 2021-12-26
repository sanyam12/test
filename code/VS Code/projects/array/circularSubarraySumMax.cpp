#include <iostream>
using namespace std;

int kadane (int arr[], int n) {
    int maxsum =0;
    int currsum =0;

    for(int i=0; i<n; i++)
    {
        currsum +=arr[i];

        if(currsum<0) {
            currsum = 0;
        }

        maxsum = max(maxsum, currsum);
    }

    return maxsum;
}

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int test[n];
    for(int i=0; i<n; i++)
    {
        test[i] = -(arr[i]);
    }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<test[i]<<" ";
    // }

    // cout<<endl;

    int waste = - kadane(test, n);
    // cout<<waste<<endl;

    int sum =0;
    
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    
    int wrapped = sum - waste;
    int nonwrapped = kadane(arr, n);
    int ans = max(wrapped, nonwrapped);
    cout<<ans<<endl;


    return 0;
}