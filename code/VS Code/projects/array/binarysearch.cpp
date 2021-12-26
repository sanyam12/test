#include <iostream>
using namespace std;

int binarysearch (int arr[], int  n, int key) {
    int s=0;
    int e=n;
    int middle;
    while(s<=e) {
        int m = (s+e)/2;
        middle = arr[m];

        if(middle == key) {
            return m;
        } else if (middle > key) {
            e = m-1;
        } else if (middle < key) {
            s=m+1;
        }
    }

    if(middle != key) {
        return -1;
    }
    
}


int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<binarysearch(arr, n, key)<<endl;
    return 0;
}