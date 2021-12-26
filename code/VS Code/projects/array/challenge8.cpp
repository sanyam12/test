#include <iostream>
#include <climits>
using namespace std;

void arrayPrint (int s, int l, int arr[]) {
    for(int i=s; i<=l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int arraySum (int arr[], int s, int l) {
    int sum =0;
    for(int i=s; i<l; i++) {
        sum +=arr[i];
    }
    return sum;
}

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int maxsum = INT_MIN;
    int s=-1;
    int l=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(maxsum<arraySum(arr,i,j)) {
                maxsum = arraySum(arr,i,j);
                s=i;
                l=j;
            }
        }
    }

    arrayPrint(s, l, arr);
    return 0;
}