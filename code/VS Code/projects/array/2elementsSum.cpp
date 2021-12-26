#include <iostream>
using namespace std;

bool pairSum (int arr[], int n, int k) {
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if( arr[i] + arr[j] ==k)
            {
                cout<<i<<" "<<j<<endl;
                
                return true;
            }
        }
    }

    return false;
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

    bool boo = pairSum(arr,n,k);

    if(pairSum(arr, n, k)) 
    {
        
    } else {
        cout<<"Error 404:- elements not found.\n";
    }

    return 0;
}