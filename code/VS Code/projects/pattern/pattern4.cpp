#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int output = 1;

    for(int r=1; r<=n; r++) {
        for (int c = 1; c <=r; c++)
        {
            cout<<output<<" ";
            output++;
        }
        cout<<endl;
    }

    return 0;
}