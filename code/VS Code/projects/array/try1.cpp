#include <iostream>
#include <climits>
using namespace std;

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int c=0; c<n; c++) {
        int minimum = arr[c] ;
        int m = -1;
        for(int i=c+1; i<=n; i++) {
            if(arr[i]<minimum) {
                minimum = arr[i];
                m = i;
            }
        }
        arr[m] = arr[c];
        arr[c] = minimum;
    }

    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}