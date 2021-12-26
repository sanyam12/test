#include <iostream>
using namespace std;

int main () {

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;

    bool found = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]==k) {
                cout<<"available at "<<i+1<<" "<<j+1<<endl;
                found = true;
            }
        }
    }
    if (found == false) {
        cout<<"NOT FOUND."<<endl;
    }
    return 0;
}