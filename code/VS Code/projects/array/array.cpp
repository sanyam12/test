#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int age[n];
    for(int i=0; i<n; i++) {
        cin>>age[i];
    }

    for(int i=0; i<n; i++) {
        cout<<age[i]<<" ";
    }
    cout<<endl;
    return 0;
}