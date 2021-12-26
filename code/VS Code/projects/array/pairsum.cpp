#include <iostream>
using namespace std;

void pairSum (int arr[], int n, int k) {
    int low = 0;
    int high = n-1;


    while(low<high)
    {
        if(arr[low]+arr[high]<k)
        {
            low++;
        } else 
        if (arr[low]+arr[high]>k)
        {
            high--;
        } else
        if(arr[low]+arr[high]==k)
        {
            cout<<low+1<<" "<<high+1<<endl;
            return;
        }
    }
    
    return;
}

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    pairSum(arr,n,k);

    

    return 0;
}