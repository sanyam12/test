#include <iostream>
using namespace std;

int main () {

    int n;
    cin>> n;

    int set[n];

    for(int i=0; i<n; i++) {
        cin>>set[i];
    }

    int maxmin = set[0];

    for (int i=0; i<n; i++) {
        if (set[i]>maxmin)
        {
            maxmin = set[i];
        }
        
    }

    cout<<"The maximum out of the array was "<<maxmin<<".\n";

    for (int i=0; i<n; i++) {
        if (set[i]<maxmin)
        {
            maxmin = set[i];
        }
        
    }
    cout<<"The minimum out of the array was "<<maxmin<<".\n";

    return 0;
}