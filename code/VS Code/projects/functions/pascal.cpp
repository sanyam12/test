#include <iostream>
using namespace std;

int fact (int n) {
    int result=1;
    for (int i=2; i<=n; i++) {
        result *= i;
    }
    return result;
}

int main () {

    int n;
    cin>>n;

    for (int i=1;i<n; i++) {
        for (int j=1; j<=i; j++) {
            
            cout<<fact(i) / (fact(i-j) * fact (j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}