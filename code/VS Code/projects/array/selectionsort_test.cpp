#include <iostream>
#include <climits>
using namespace std;

int minFinder(int s, int arr[] , int n) {
    int min = INT_MAX;
    int m = -1;
    for(int i=s; i<=n; i++) {
        if(arr[i]<min) {
            min = arr[i];
            m = i;
        }
    }
    return m;
}

int sorter (int arr[] , int n) {
    for (int c=0; c<n-1; c++) {
        //getting the min value.
        int minfound = arr[minFinder(c+1, arr, n)];
        
        //swap of values.
        arr[minFinder(c+1, arr, n)] = arr[c];
        arr[c] = minfound;
    }
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}



int main () {

    int n;
    cout<<"Provide me n: ";
    cin>>n;

    int arr[n];
    cout<<"Provide me array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sorter(arr, n);
    return 0;
}