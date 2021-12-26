#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i] [j];
        }
    }


    for(int row=0; row<n; row++) {
        for(int col=row; col<n; col++) {
            if(row==col) {
                
            } else {
                int temp = arr[row][col];
                arr[row][col]=arr[col][row];
                arr[col][row]=temp;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i] [j]<<" ";
        }
    cout<<endl;
    }
    

    return 0;
}