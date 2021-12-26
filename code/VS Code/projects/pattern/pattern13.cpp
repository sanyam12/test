#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    for(int r=1; r<=3; r++) {
        for (int c=1; c<=n; c++){
            if(((r+c)%4==0) ||(r=2 && c%4==0)) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}