#include <iostream>
#include <climits>
using namespace std;

int maxFinder (int raw[], int n) {
    int result = INT_MIN;
    int m = -1;
    for(int i=0;i<n; i++) {
        if(raw[i]>result) {
            result = raw[i];
            m = i;
        }
    }
    
    return m;
}

int main () {

    int n;
    cin>>n;

    int raw[n];
    for(int i=0; i<n; i++) {
        cin>>raw[i];
    }

    int output [n];
    for(int i=0; i<n; i++) {
        int max = raw[maxFinder(raw, n)];

        output[i] = max;
        raw[maxFinder(raw, n)] = INT_MIN;

    }

    
    for(int i=0; i<n; i++) {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}