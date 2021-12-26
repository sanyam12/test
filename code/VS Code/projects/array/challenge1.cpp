#include <iostream>
using namespace std;

int maxFinder (int arr[], int i) {
    int output = arr[0];

    for (int r=0; r<=i; r++) {
        if(output<arr[r]) {
            output = arr[r];
        }
    }
    return output;
}

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<maxFinder(arr, i)<<endl;
    }

    return 0;
}